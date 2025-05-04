NAME =  animal

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp
HEAD = Animal.hpp Cat.hpp Dog.hpp 
OBJ =$(SRC:.cpp=.o)

%.o: %.cpp $(HEAD)
	$(CC) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) :$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME) -v


clean:
	rm -f $(OBJ)

# Clean everything (objects + executable)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all
