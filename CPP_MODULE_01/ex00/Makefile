# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 11:44:01 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/20 11:57:44 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = ${SRC:.cpp=.o}
NAME = Zombie
GCC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
		${GCC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
		rm -f *.o

fclean: clean
		rm -f ${NAME}

re: fclean all
