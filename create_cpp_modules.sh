#!/bin/bash

# cpp00からcpp09までのモジュールを一括作成するスクリプト

for i in {00..09}; do
    # ディレクトリ作成
    mkdir -p "cpp${i}"
    
    # 各モジュールにex00, ex01, ex02のディレクトリを作成
    for ex in {00..02}; do
        mkdir -p "cpp${i}/ex${ex}"
        
        # 基本的なファイル構造を作成
        touch "cpp${i}/ex${ex}/Makefile"
        touch "cpp${i}/ex${ex}/main.cpp"
        
        # Makefileのテンプレートを作成
        cat > "cpp${i}/ex${ex}/Makefile" << 'EOF'
NAME = program
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCDIR = .
OBJDIR = obj
SOURCES = main.cpp
OBJECTS = $(SOURCES:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
EOF
        
        # main.cppのテンプレートを作成
        cat > "cpp${i}/ex${ex}/main.cpp" << 'EOF'
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
EOF
        
        echo "Created cpp${i}/ex${ex}"
    done
    
    # 各モジュールにREADMEファイルを作成
    cat > "cpp${i}/README.md" << EOF
# CPP Module ${i}

## Description
This module covers C++ concepts for Module ${i}.

## Exercises
- ex00: [Exercise description]
- ex01: [Exercise description]
- ex02: [Exercise description]

## Compilation
\`\`\`bash
cd ex00  # or ex01, ex02
make
\`\`\`

## Usage
\`\`\`bash
./program
\`\`\`
EOF
    
    echo "Created cpp${i} module"
done

echo "All CPP modules (cpp00-cpp09) have been created successfully!"
