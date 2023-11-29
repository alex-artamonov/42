#include <stdio.h>

int len(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}


void    go_backwards(char *str)
{
    int i;
    //int power_dec;
    int len_str;

    len_str = len(str);
    i = 0;
    //power_dec = 0;
    while (i < len_str)
    {
        puts(str[len_str - i]);
        i++;
    }

}

int main(int argc, char **argv)
{
    if (argc < 1)
        return (0);
    go_backwards(argv[1]);
}