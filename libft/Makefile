# -*- MakeFile -*-

CFLAGS 	= -Wall -Wextra -Werror

CFILES 	= test_atoi.c

OFILES 	= $(CFILES:.c=.o)

NAME 	= go

$(NAME): $(OFILES)
	cc $(OFILES) -o $(NAME)

$(OFILES): $(CFILES)
	cc -c $(CFLAGS) $(CFILES)


fclean:
	rm -f $(NAME)

re: fclean $(NAME)



.PHONY:  all clean fclean re