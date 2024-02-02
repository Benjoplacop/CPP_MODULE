# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 11:59:33 by bhennequ          #+#    #+#              #
#    Updated: 2023/11/09 11:59:33 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Serializer.cpp

OBJS = ${SRC:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serializer

all: ${NAME}

%.o: %.cpp
		g++ ${FLAGS} -I./ -c $< -o $@

${NAME}: ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean: 
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
