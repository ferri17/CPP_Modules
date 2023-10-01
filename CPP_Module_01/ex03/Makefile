# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 22:57:38 by fbosch            #+#    #+#              #
#    Updated: 2023/10/01 00:38:34 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	weapons
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ		=	${SRC:%.cpp=$(DIR_OBJ)%.o}
DEP		=	$(OBJ:%.o=%.d)

DIR_OBJ	=	.obj/

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
DPFLAGS	=	-MMD -MP
RM		=	rm -rf

all:	$(DIR_OBJ) $(NAME)

$(DIR_OBJ)	:
	mkdir -p $@

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(DIR_OBJ)%.o: %.cpp Makefile
	$(CC) $(CFLAGS) $(DPFLAGS) -c $< -o $@

clean:
	$(RM) $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)
