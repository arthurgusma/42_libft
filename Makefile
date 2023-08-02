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