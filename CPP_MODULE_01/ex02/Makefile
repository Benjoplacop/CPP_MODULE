# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 15:03:01 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/21 15:03:02 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = ${SRC:.cpp=.o}
NAME = Brain
GCC = c++

all: ${NAME}

${NAME}: ${OBJS}
		${GCC} ${FLAGS} -o ${NAME} ${OBJS}
	
clean : 
		rm -f *.o

fclean : clean
		rm -f ${NAME}

re : fclean all