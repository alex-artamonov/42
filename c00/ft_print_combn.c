#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    print_digit(int n)
{
    const char  *digits = "0123456789";
    if (n < 0 || n > 9)
        return;
    write(1, &digits[n], 1);
}

void inner_print(int n, int x)
{
    int i;
    i = 0;

    while (i <= 9)
    {
        print_digit(n);
        print_digit(i);
        write(1, ", ", 2);
        i++;
    }

}

void ft_print_combn(int n)
{
    char        mask[10];
    int         i;
    int         j;
    int         k;

    if (n < 1 || n > 9)
        {
            write(1, "n is out of limits!", 19);
            write(1, "\n", 1);
            return;
        }
    i = 0;
    j = 1;
    while (i <= 9)
    {
        mask[0] = i + '0';
        while (j <= n)
        {
            k = i + 1;
            while (k <= 9)
            {
                mask[j] = k + '0';
                write(1, mask, n);
                write(1, ", ", 2);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int n;
    if (argc != 2)
        return (1);
    n = atoi(argv[1]);
    // puts(argv[1]);
    ft_print_combn(n);
    write(1, "\n", 1);
    return (0);
}