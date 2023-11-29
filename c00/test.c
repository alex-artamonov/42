#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int 			n;
	int				i;
	const char    	*digits = "0123456789";
	int 			highscore[] = {750, 699, 675};

    if (argc != 2)
	{
		puts("Expected one argument");
        return (1);
	}
    n = atoi(argv[1]);
    i = 0;

    i = -1;
    while (*digits)
		{
			write(1, digits, 1);
			*digits++;
		}
	write(1, "\n", 1);
}
	// while (++i < n)
	// 	printf("i=%d ", i);
    // printf("\n");
    // i = 1;
    // while (i < n)
    // {
    //     printf("i=%d ", i);
    //     i++;
    // }
    // printf("\n");
    // int j = 0;
    // while (j++ < n)
	// 	printf("j=%d ", j);
    // j = 1;
    // printf("\n");
    // while (j <= n)
    // {
    //     printf("j=%d ", j);
    //     ++j;
    // }
    // printf("\n");
    // char    c;
    // while (++i < 10)
    // {
    //     c = i + 48;
    //     write(1, &c, 1);
    // }
    // write(1, "\n", 1);