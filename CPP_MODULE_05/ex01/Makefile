# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 11:14:54 by bhennequ          #+#    #+#              #
#    Updated: 2023/11/06 11:14:56 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = Bureaucrat.cpp main.cpp Form.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRC:.cpp=.o}

NAME = Bureaucrat

all: ${NAME}

%.o: %.cpp
		g++ ${FLAGS} -I./ -c $< -o $@

${NAME}: ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean : 
		rm -f *.o

fclean : clean
		rm -f ${NAME}

re : fclean all