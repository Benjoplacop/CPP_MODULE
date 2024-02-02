# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 15:44:38 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/25 15:44:39 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Harl.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRC:.cpp=.o}

NAME = Harl2.0

all : ${NAME}

${NAME} : ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean: 
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all
