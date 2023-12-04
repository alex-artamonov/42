#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
    int i;
    while(s1[i] && *s2 && n)
    {
        printf("Before if: s1[%d] %c, *s2 %c\n", i, s1[i], )
        if (s1[i] == *s2)
        {
            s2++;
            n--;
            i++;
        }
        i++;
    }
    return (char *)&s1[i];
}

char *test(const char *s, int n)
{
    int i;
    i = 0;
    while (*s && i < n)
    {
        s++;
        i++;
    }
    return (char *)s;
}

int main(int argc, char **argv)
{
    if (argc < 2)
	{
		puts("Enter at least one argument");
		return (0);
	}
	char    *s1;
    char    *s2;
	s1 = argv[1];
	s2 = argv[2];
    int     i;
    // char    *s;
    i = atoi(argv[3]);
    // s = test(w, i);
    // printf("result: '%s'\n", test(w, i));
    printf("result: '%s'\n", ft_strnstr(s1, s2, i));
    // char s1[] = "GeeksforGeeks";
    // char s2[] = "for";
    // char* p;
 
    // // Find first occurrence of s2 in s1
    // p = strstr(s1, s2);
 
    // // Prints the result
    // if (p) {
    //     printf("String found\n");
    //     printf("First occurrence of string '%s' in '%s' is "
    //            "'%s'",
    //            s2, s1, p);
    // }
    // else
    //     printf("String not found\n");
    return 0;
    
}