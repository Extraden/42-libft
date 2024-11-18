CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

OBJS = ft_bzero.o ft_isalnum.o ft_isascii.o ft_isprint.o  \
	ft_strlen.o ft_toupper.o ft_calloc.o ft_isalpha.o ft_isdigit.o ft_memcpy.o \
	ft_memset.o ft_tolower.o ft_memmove.o ft_putchar_fd.o ft_strlcpy.o ft_strlcat.o \
	ft_strdup.o ft_atoi.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o \
	ft_strnstr.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o

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
