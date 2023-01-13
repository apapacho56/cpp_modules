# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 21:50:27 by aparedes          #+#    #+#              #
#    Updated: 2023/01/10 15:18:49 by aparedes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Polymorphism
CC			=	c++
FLAGS		=	-Wall -Wextra  -Werror -std=c++98 
RM 			=	rm -rf

OBJDIR		= .trash

FILES 		=  main Animal Cat Dog Wrong

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Animal.hpp Cat.hpp Dog.hpp Wrong.hpp

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
