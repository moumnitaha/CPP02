# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 11:42:33 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/05 17:05:44 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSP
HEADER = Fixed.hpp Point.hpp
RM = rm -rf

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = main.cpp Fixed.cpp Point.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(STD) -o $@
%.o : %.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME)
re: fclean all