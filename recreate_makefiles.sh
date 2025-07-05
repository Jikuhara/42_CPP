#!/bin/bash

# CPP00-09の全MakefileをNew Styleで作り直すスクリプト

for i in {00..09}; do
    for ex in {00..02}; do
        makefile_path="cpp${i}/ex${ex}/Makefile"
        
        # 各演習に応じたプログラム名を設定
        if [ "$i" == "00" ]; then
            case $ex in
                00) program_name="megaphone" ;;
                01) program_name="phonebook" ;;
                02) program_name="account" ;;
            esac
        else
            program_name="program"
        fi
        
        # New Style Makefileを作成
        cat > "$makefile_path" << EOF
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/05 15:45:00 by kei2003730        #+#    #+#              #
#    Updated: 2025/07/05 15:45:00 by kei2003730       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------------------------------------------------------------------
#> variables
#-----------------------------------------------------------------------------

NAME		:= ${program_name}

#─ compile config ────────────────────────────────────────────────────────────

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

#─ directory name ────────────────────────────────────────────────────────────

OBJDIR		:= obj

#─ sources & objects ─────────────────────────────────────────────────────────

SRCS		:= main.cpp

OBJS		:= \$(SRCS:%.cpp=\$(OBJDIR)/%.o)

#─ colors ────────────────────────────────────────────────────────────────────

GREEN		:= \033[32m
YELLOW		:= \033[33m
CYAN		:= \033[36m
WHITE		:= \033[37m
RESET		:= \033[0m
BOLD		:= \033[1m

#-----------------------------------------------------------------------------
#> rules
#-----------------------------------------------------------------------------

all: \$(NAME)

\$(NAME): \$(OBJS)
	@\$(CXX) \$(CXXFLAGS) -o \$@ \$(OBJS)
	@echo "\$(GREEN)\$(BOLD)========================================="
	@echo "    \$(NAME) created successfully!"
	@echo "=========================================\$(RESET)"

\$(OBJDIR)/%.o: %.cpp
	@mkdir -p \$(OBJDIR)
	@echo "Compiled ✅ \$(WHITE)\$(BOLD) \$< \$(RESET)"
	@\$(CXX) \$(CXXFLAGS) -c -o \$@ \$<

clean:
	@rm -rf \$(OBJDIR)
	@echo "\$(CYAN)Object files cleaned.\$(RESET)"

fclean: clean
	@rm -f \$(NAME)
	@echo "\$(CYAN)\$(NAME) removed.\$(RESET)"

re: fclean all

.PHONY: all clean fclean re
EOF
        
        echo "Created New Style Makefile for cpp${i}/ex${ex}"
    done
done

echo "All CPP module Makefiles have been recreated in New Style!"
