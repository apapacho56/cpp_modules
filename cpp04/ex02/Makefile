# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 21:50:27 by aparedes          #+#    #+#              #
#    Updated: 2023/01/10 21:57:35 by aparedes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Abstract
CC			=	c++
FLAGS		=	-Wall -Wextra  -Werror -std=c++98 
RM 			=	rm -rf

OBJDIR		= .trash

FILES 		=  main AAnimal Cat Dog 

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= AAnimal.hpp Cat.hpp Dog.hpp 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:		fclean all
