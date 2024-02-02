# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 12:24:50 by bhennequ          #+#    #+#              #
#    Updated: 2023/10/02 12:24:53 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRC:.cpp=.o}

NAME = a.out

all : ${NAME}

${NAME} : ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf *.o

fclean : clean
	rm -rf ${NAME}

re : fclean all