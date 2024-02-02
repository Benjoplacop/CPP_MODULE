# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 13:51:34 by bhennequ          #+#    #+#              #
#    Updated: 2023/11/09 13:51:35 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS = ${SRC:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Identify

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