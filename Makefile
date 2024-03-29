CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
HEADER = libft.h
SRC = ft_isalnum.c\
	ft_isalpha.c\
    ft_isascii.c\
    ft_isdigit.c\
    ft_isprint.c\
    ft_tolower.c\
    ft_toupper.c\
    ft_atoi.c\
    ft_strlcat.c\
    ft_strlcpy.c\
    ft_strchr.c\
    ft_strlen.c\
    ft_strncmp.c\
    ft_strnstr.c\
    ft_strrchr.c\
    ft_bzero.c\
    ft_itoa.c\
    ft_calloc.c\
    ft_memchr.c\
    ft_memcmp.c\
    ft_memcpy.c\
    ft_memmove.c\
    ft_memset.c\
    ft_strdup.c\
    ft_strjoin.c\
    ft_substr.c\
    ft_strtrim.c\
    ft_striteri.c\
    ft_split.c\
    ft_strmapi.c\
    ft_putchar_fd.c\
    ft_putstr_fd.c\
    ft_putendl_fd.c\
    ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ 
	ar rcs $(NAME) $@

clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all
