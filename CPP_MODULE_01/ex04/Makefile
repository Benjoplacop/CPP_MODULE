# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 13:19:24 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/25 13:25:19 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRC:.cpp=.o}

NAME = replace

all: ${NAME}

${NAME}: ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME} 

clean : 
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all
