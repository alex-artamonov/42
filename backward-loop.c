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


int    go_backwards(char *str)
{
    int i;
    int power_dec;
    int len_str;
    int result;

    len_str = len(str);
    i = 0;
    power_dec = 1;
    result = 0;
    while (i++ < len_str)
    {
        result += (str[len_str - i] - 48) * power_dec;
        printf("i=%d, str[len_str - i]=%c, result=%d\n", i, str[len_str - i], result);
        power_dec *= 10;
    }
    return (result);
}

int main(int argc, char **argv)
{
    int n;
    if (argc < 2)
        return (0);
    n = go_backwards(argv[1]);
    printf("go_backwards(%s)=%d\n", argv[1], n);
    return (0);
}