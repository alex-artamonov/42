# -*- MakeFile -*-

CFLAGS 	= -Wall -Wextra -Werror

CFILES 	= ft_a.c ft_b.c ft_c.c

OFILES 	= $(CFILES:.c=.o)

NAME 	= libft.a

$(NAME): $(OFILES) 
	ar rcs $(NAME) $(OFILES)

all:  $(NAME) clean

$(OFILES): $(CFILES)
	cc -c $(CFLAGS) $(CFILES)

clean:
	rm -f $(OFILES)

fclean:
	rm -f $(NAME)

re: fclean $(NAME)

proga: $(NAME) main.c
	cc $(CFLAGS) main.c $(NAME) -o proga

.PHONY:  all clean fclean re