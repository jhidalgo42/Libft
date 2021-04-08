NAME = libft.a

SRCS = ft_strchr.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_memccpy.c \
			ft_strdup.c  \
			ft_tolower.c \
			ft_isalnum.c \
			ft_memchr.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_isalpha.c  \
			ft_memcmp.c  \
			ft_strlcpy.c  \
			ft_bzero.c  \
			ft_isascii.c  \
			ft_memcpy.c  \
			ft_strlen.c \
			ft_calloc.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_strncmp.c  \
			ft_itoa.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strnstr.c \

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): 	$(OBJS)
			ar rc  $(NAME) $(OBJS)
			ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean

	$(RM) $(NAME)
re: 
	fclean all

.PHONY:		clean fclean all re 