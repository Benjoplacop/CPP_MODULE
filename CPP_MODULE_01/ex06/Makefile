# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 17:30:37 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/25 17:30:39 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Harl.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harlFilter

OBJS = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS} -o ${NAME}

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all