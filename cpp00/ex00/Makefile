# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 19:44:12 by aparedes          #+#    #+#              #
#    Updated: 2022/12/30 15:29:50 by aparedes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
SRC			=	megaphone.cpp
OBJS		=	$(SRC: .cpp=.o)
CC			=	clang++

FLAGS		=	-Wall -Wextra  -Werror -std=c++98

NAME_OBJ	=	-o megaphone
EXEC		=	megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(NAME_OBJ)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -rf $(EXEC)

fclean: clean
	rm	-rf $(EXEC)

re:		fclean all

.PHONY: all clean fclean re