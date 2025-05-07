# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 02:31:16 by yojablao          #+#    #+#              #
#    Updated: 2025/05/07 02:31:17 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  animal 
CC = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp

HEAD = Cure.hpp Ice.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp AMateria.hpp ICharacter.hpp Cure.hpp Ice.hpp 

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
