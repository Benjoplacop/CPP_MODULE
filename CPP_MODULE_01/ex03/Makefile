# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 15:28:05 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/21 15:28:07 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
GCC = c++
OBJS = ${SRC:.cpp=.o}
NAME = Weapon

all : ${NAME}

${NAME} : ${OBJS}
	${GCC} ${FLAGS} -o ${NAME} ${OBJS}

clean : 
		rm -f *.o 

fclean: clean
		rm -f ${NAME}

re : fclean all
