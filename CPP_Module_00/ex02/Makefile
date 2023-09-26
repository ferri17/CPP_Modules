# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:44:52 by fbosch            #+#    #+#              #
#    Updated: 2023/09/27 01:04:55 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	dreamjob
SRC		=	tests.cpp Account.cpp
OBJ		=	${SRC:%.cpp=$(DIR_OBJ)%.o}
HEADERS	=	Account.hpp

DIR_OBJ = .obj/

CC		=	c++
CFLAGS	=	#-std=c++98 -Wall -Wextra -Werror
RM		=	rm -rf

all:	$(DIR_OBJ) $(NAME)

$(DIR_OBJ)	:
	mkdir -p $@

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(DIR_OBJ)%.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
