# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 11:42:33 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/24 22:19:49 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
HEADER = Fixed.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf

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