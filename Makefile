# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argusmao <argusmao@@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 20:12:55 by argusmao          #+#    #+#              #
#    Updated: 2023/08/15 20:12:56 by argusmao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c *.c
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all