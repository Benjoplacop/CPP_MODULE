# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 13:53:28 by bhennequ          #+#    #+#              #
#    Updated: 2023/11/20 14:36:36 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJS = ${SRC:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Vector

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
