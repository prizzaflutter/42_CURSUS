# List of source files for the mandatory functions
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
         ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
         ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
         ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
         ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
         ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
         ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
         ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
         ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# List of source files for the bonus functions (linked list functions)
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
        ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
        ft_lstmap.c

# Object files generated from the source files
OBJECTS = ${SOURCE:.c=.o}
OBJECTB = ${BONUS:.c=.o}

# Name of the static library
NAME = libft.a

# Command for creating the static library
LIBC = ar rcs

# Compiler to use
CC = cc

# Flags for the compiler to enable all warnings and treat them as errors
CFLAGS = -Wall -Wextra -Werror

# Default target to build the static library
all: ${NAME}

# Rule for creating the static library from the object files
${NAME}: ${OBJECTS}
	${LIBC} ${NAME} ${OBJECTS}

# Rule for compiling .c files into .o object files
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

# Bonus target to add bonus object files and create the library
bonus: ${OBJECTB}
	${LIBC} ${NAME} ${OBJECTB}

# Clean target to remove all object files
clean:
	${RM} ${OBJECTS} ${OBJECTB}

# Full clean target to remove all object files and the static library
fclean: clean
	${RM} ${NAME} ${bonus}

# Rebuild target to clean and rebuild everything
re: fclean all

# Declare these targets as phony (i.e., not actual files)
.PHONY : all bonus clean fclean re