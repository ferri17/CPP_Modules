# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:44:52 by fbosch            #+#    #+#              #
#    Updated: 2024/02/02 17:55:15 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bureaucrat
SRC			=	main.cpp Bureaucrat.cpp
OBJ			=	${SRC:%.cpp=$(DIR_OBJ)%.o}
DEP			=	$(OBJ:%.o=%.d)

DIR_OBJ		=	.obj/

CXX			=	c++
CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror -pedantic
DPFLAGS		=	-MMD -MP
RM			=	rm -rf

all:	$(DIR_OBJ) $(NAME)

$(DIR_OBJ)	:
	mkdir -p $@

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(DIR_OBJ)%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) $(DPFLAGS) -c $< -o $@

clean:
	$(RM) $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)
