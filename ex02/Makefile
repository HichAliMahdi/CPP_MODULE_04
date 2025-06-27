# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/06 18:42:45 by hali-mah          #+#    #+#              #
#    Updated: 2025/06/27 06:25:14 by hali-mah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++17

SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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
