CFILES	:= ft_atoi.c \
		   ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_isprint.c \
		   ft_strlen.c \
		   ft_tolower.c \
		   ft_toupper.c \
		   ft_strchr.c \
		   ft_strrchr.c \
		   ft_strncmp.c \
		   ft_strnstr.c \
		   ft_bzero.c \
		   ft_memset.c \
		   ft_strlcat.c

OFILES	:= $(CFILES:.c=.o)

CFLAGS 	:= -Wall -Wextra -Werror

NAME	:= libft.a

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

all: $(NAME) clean

$(OFILES): $(CFILES)
	cc -c $(CFLAGS) $(CFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

test: $(NAME) tests.c
	cc $(CFLAGS) tests.c $(NAME) -o test

