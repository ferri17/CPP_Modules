# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:44:52 by fbosch            #+#    #+#              #
#    Updated: 2023/10/13 21:00:14 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	claptrap
SRC		=	main.cpp ClapTrap.cpp
OBJ		=	${SRC:%.cpp=$(DIR_OBJ)%.o}
DEP		=	$(OBJ:%.o=%.d)

DIR_OBJ	=	.obj/

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -pedantic
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
