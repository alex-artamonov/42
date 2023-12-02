#include <stdio.h>
#include <stdlib.h>

int char_in_str(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

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

int first_non_space(char *str)
{
	char *spaces = "\n\t\r\f ";
	int         i;

	i = 0;
	while (str[i] && char_in_str(str[i], spaces))
	{
		i++;
	}
	return (i);
}

int last_digit(char *str, int start)
{
	//int i;

	//i = first_non_space(str);
	while (str[start] && char_in_str(str[start], "0123456789"))
	{
		start++;
	}
	return (start - 1);
}

int    to_decimal(char *str, int start, int stop)
{
	//int i;
	int power_dec;
	//int len_str;
	int result;
	
	printf("start=%d, stop=%d\n", start, stop);
	//printf("first_non_space(str): %d\n", first_non_space(str));
	//printf("last_digit(str): %d\n", last_digit(str));
	// len_str = len(str);
//	i = 0;
//	i = first_non_space(str);
//	len_str = last_digit(str) + i - 1;
	power_dec = 1;
	result = 0;
	while (start <= stop)
	{
		result += (str[stop - start + 1] - 48) * power_dec;
		printf("start=%d, str[stop - start - 1]=%c, result=%d\n", start, str[stop - start - 1], result);
		power_dec *= 10;
		start++;
	}
	return (result);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		puts("Enter at least one argument");
		return (0);
	}
	char    *w;
	int		start;
	int		stop;

	w = argv[1];
	start = first_non_space(w);
	stop = last_digit(w, start);
	printf("start=%d, stop=%d\n", start, stop);
	// int range[] = {4, 7};
	// int last_digit = 5;
	printf("Atoi: Input: \'%s\', output: \'%d\'\n", w, atoi(w));
	printf("To_decimal:Input: \'%s\', output: \'%d\'\n", w, to_decimal(w, start, stop));
	// printf("Input: \'%s\', output: \'%d\'\n", w, get_first_non_space(w));
	return (0);
}
