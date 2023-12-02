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
	while (str[i])
	{
		if (!char_in_str(str[i], spaces))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int last_digit(char *str)
{
	int i;

	i = first_non_space(str);
	while (str[i] && char_in_str(str[i], "0123456789"))
	{
		i++;
	}
	return (i);
}

int    to_decimal(char *str)
{
	int i;
	int power_dec;
	int len_str;
	int result;

	printf("first_non_space(str): %d\n", first_non_space(str));
	printf("last_digit(str): %d\n", last_digit(str));
	// len_str = len(str);
	i = 0;
	i = first_non_space(str);
	len_str = last_digit(str) + i - 1;
	power_dec = 1;
	result = 0;
	while (i < len_str - 1)
	{
		result += (str[len_str - i] - 48) * power_dec;
		printf("i=%d, str[len_str - i]=%c, result=%d\n", i, str[len_str - i], result);
		power_dec *= 10;
		i++;
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
	w = argv[1];
	// int range[] = {4, 7};
	// int last_digit = 5;
	printf("Atoi: Input: \'%s\', output: \'%d\'\n", w, atoi(w));
	printf("To_decimal:Input: \'%s\', output: \'%d\'\n", w, to_decimal(w));
	// printf("Input: \'%s\', output: \'%d\'\n", w, get_first_non_space(w));
	return (0);
}
