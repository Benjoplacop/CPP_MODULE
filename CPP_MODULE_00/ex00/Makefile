# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 16:29:42 by bhennequ          #+#    #+#              #
#    Updated: 2023/09/18 11:54:01 by bhennequ         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = MegaPhone.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
NAME = megaphone

all: ${NAME}

${NAME}: ${OBJ}
		${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean: 
	${RM} *.o 

fclean: clean
	${RM} ${NAME} 

re: fclean ${NAME}
