# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 21:50:27 by aparedes          #+#    #+#              #
#    Updated: 2023/01/05 12:28:16 by aparedes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	replace
CC			=	c++
FLAGS		=	-Wall -Wextra  -Werror -std=c++98 
RM 			=	rm -rf

OBJDIR		= .trash

FILES 		= main 

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
# HEADER		= Zombie.hpp

.PHONY: all clean fclean re

all: $(NAME)
#  $(HEADER)
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
# $(HEADER)
$(OBJDIR)/%.o: %.cpp 
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ) *.replace

fclean: clean
	$(RM) $(NAME)

re:		fclean all
