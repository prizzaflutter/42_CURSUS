NAME=libft.a
all: ${NAME}
${NAME}: 
	gcc -Werror -Wextra -Wall -std=c99 -c *.c
	ar rcs ${NAME}  *.o
clean:
	rm -rf *.o
fclean: clean 
	rm -rf ${NAME}
re: fclean all