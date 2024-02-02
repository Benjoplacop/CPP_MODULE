# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 12:16:21 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/21 12:16:23 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp main.cpp zombieHorde.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Horde
GCC = c++
OBJS = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
		${GCC} ${FLAGS} ${OBJS} -o ${NAME} 

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all