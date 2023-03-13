# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboncine <aboncine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 12:45:42 by aboncine          #+#    #+#              #
#    Updated: 2023/03/09 09:31:33 by aboncine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) -c $(CFLAGS) $?

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o
