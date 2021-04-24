# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchow <jchow@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/21 22:34:31 by jchow             #+#    #+#              #
#    Updated: 2017/06/21 22:34:32 by jchow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main.cpp

OBJSRCS = $(SRCS:.cpp=.o)

.cpp.o:
		${CC} -c $< -o ${<:.cpp=.o}

CC = clang++ -Wall -Werror -Wextra

$(NAME) : $(OBJSRCS)
		${CC} $(OBJSRCS) -o $(NAME)

all : $(NAME)

clean :
		rm -rf $(OBJSRCS)

fclean : clean
		rm -rf $(NAME)

re : fclean all