# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:32:05 by bhennequ          #+#    #+#              #
#    Updated: 2023/10/04 14:32:06 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Dog.cpp Cat.cpp main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRC:.cpp=.o}

NAME = a.out

all : ${NAME}

%.co: %.cpp
		g++ ${FLAGS} -I./ -c $< -o $@

${NAME} : ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf *.o

fclean : clean
	rm -rf ${NAME}

re: fclean all
