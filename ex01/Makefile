# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/06 18:42:45 by hali-mah          #+#    #+#              #
#    Updated: 2025/06/28 17:11:02 by hali-mah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++17

SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME) 
re: fclean all

.PHONY: all clean fclean re
