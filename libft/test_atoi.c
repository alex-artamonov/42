#include <stdio.h>
#include <stdlib.h>

static int char_in_str(char c, char *str)
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
	while (str[start] && char_in_str(str[start], "0123456789"))
	{
		start++;
	}
	return (start - 1);
}

int    to_decimal(char *str, int start, int stop)
{
	int power_dec;
	int result;
	
	printf("start=%d, stop=%d\n", start, stop);
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

int ft_atoi(char *str)
{
	int	i;
	int	result;
	int	plus_minus;
	char	*spaces = "\t\v\f\r\n ";

	result = 0;
	plus_minus = 1;

	while (char_in_str(*str, spaces))
	{
		str++;
	}

	if (! char_in_str(*str, "-+0123456789"))
		return (0);

	if (char_in_str(*str, "-+"))
	{
		if (*str == '-')
			plus_minus = -1;
		str++;
	}
	
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}	
	return (result * plus_minus);
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
	// start = first_non_space(w);
	// stop = last_digit(w, start);
	// printf("start=%d, stop=%d\n", start, stop);
	// int range[] = {4, 7};
	// int last_digit = 5;
	printf("Atoi: Input:\t\'%s\', output:\t\'%d\'\n", w, atoi(w));
	printf("ft_atoi: Input:\t\'%s\', output:\t\'%d\'\n", w, ft_atoi(w));
	// printf("To_decimal:Input: \'%s\', output: \'%d\'\n", w, to_decimal(w, start, stop));
	// printf("Input: \'%s\', output: \'%d\'\n", w, get_first_non_space(w));
	// printf("%d\n", ft_atoi(w));
	return (0);
}
