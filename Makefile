CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

OBJS = ft_bzero.o ft_isalnum.o ft_isascii.o ft_isprint.o  \
	ft_strlen.o ft_toupper.o ft_calloc.o ft_isalpha.o ft_isdigit.o ft_memcpy.o \
	ft_memset.o ft_tolower.o ft_memmove.o ft_putchar_fd.o ft_strlcpy.o

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
