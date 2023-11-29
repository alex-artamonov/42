#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);

}


char	*ft_rev_print (char *str)
{
	int	str_len; 
	int	i;

	i = 0;
	str_len = ft_strlen(str);
	str_len--;
	while (str_len >= 0)
	{
		write(1, &str[str_len], 1);
		str_len--;
	}
	return str;
}

int main(int argc, char **argv)
{
	printf("argc = %d\n", argc);
	char str[] = "night";
	if (argc == 2)
		ft_rev_print(argv[0]);
	write(1, "\n", 1);
	return (0);
}
