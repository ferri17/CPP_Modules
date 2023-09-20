# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:44:52 by fbosch            #+#    #+#              #
#    Updated: 2023/09/18 01:18:13 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook
SRC		=	main.cpp PhoneBook.cpp Contact.cpp
OBJ		=	${SRC:%.cpp=%.o}
HEADER	=	PhoneBook.hpp  Contact.hpp
CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
RM		=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)



