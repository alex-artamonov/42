#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        puts("Enter at least one argument");
        return (0);
    }
    char    *w;
    w = argv[1];
    printf("Input: \'%s\', output: \'%d\'\n", w, atoi(w));
    return (0);
}