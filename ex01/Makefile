NAME =  animal

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fno-omit-frame-pointer
SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
HEAD = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
OBJ =$(SRC:.cpp=.o)

%.o: %.cpp $(HEAD)
	$(CC) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) :$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME) 


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
