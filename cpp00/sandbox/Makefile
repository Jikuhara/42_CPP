CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = cout_deep_dive

SOURCES = cout_deep_dive.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
