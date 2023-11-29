#include <stdio.h>

int	main(int argc, char **argv)
{
	char a,b,c;
	char *p;

	a = 'a';
	p = &a;
	printf("a=%p, '%c'\n", &a, a);
	printf("p=%p, '%c'\n", p, *p);
	*p = 'b';
	printf("a=%p, '%c'\n", &a, a);
	printf("p=%p, '%c'\n", p, *p);
}
