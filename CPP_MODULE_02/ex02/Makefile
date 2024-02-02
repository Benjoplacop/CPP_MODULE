# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 15:58:37 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/27 15:58:38 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Fixed.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRC:.cpp=.o}

NAME = a.out

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS}

clean :
	rm -f *.o

fclean : clean
	rm -f a.out

re : fclean all