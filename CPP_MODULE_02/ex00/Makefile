# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 19:38:26 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/25 19:38:27 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = Fixed.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Ortho

OBJS = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS}

clean:
	rm -f *.o

fclean : clean
	rm -f a.out

re : fclean all