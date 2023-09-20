# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:44:52 by fbosch            #+#    #+#              #
#    Updated: 2023/09/17 13:58:24 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	${SRC:%.cpp=%.o}

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
RM		=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)



