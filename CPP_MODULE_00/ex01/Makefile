# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 12:13:04 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/18 11:55:19 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp Contact.cpp main.cpp
INCLUDE = PhoneBook.hpp Contact.hpp
OBJS = ${SRC:.cpp=.o}
NAME = M.A.P
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
