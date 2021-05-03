# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blorin <blorin@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/05 20:57:52 by blorin            #+#    #+#              #
#    Updated: 2021/02/24 13:25:17 by blorin           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRCS = main.cpp

OBJSRCS = $(SRCS:.cpp=.o)

.cpp.o:
	${CC} -c $< -o ${<:.cpp=.o}

CC = clang++ -Wall -Wextra -Werror

$(NAME) : $(OBJSRCS)
	${CC} $(OBJSRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
