NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_putchar_fd.c ft_strtrim.c libft.h strchr.c strrchr.c ft_putendl_fd.c ft_substr.c memccpy.c strdup.c  tolower.c aaamain.c ft_putnbr_fd.c isalnum.c memchr.c strlcat.c toupper.c atoi.c ft_putstr_fd.c isalpha.c memcmp.c strlcpy.c bzero.c ft_split.c isascii.c memcpy.c strlen.c calloc.c ft_strjoin.c isdigit.c memmove.c strncmp.c ft_itoa.c ft_strmapi.c isprint.c memset.c strnstr.c


$(NAME): 
	$(CC) $(CFLAGS) $(NAME) $(SRCS)

read:  libft.h
	$(CC) $(CFLAGS) -c 

all: $(NAME) libft.h
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm $(NAME) 

fclean:
	rm  -f $(NAME)

re: 
	fclean all