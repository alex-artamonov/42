#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;	
	}
	return i;
}

int	main(void)
{
	char word[] = "word";
	int len = ft_strlen(word);
	write(1, &len, 1);	
	return ft_strlen(word);	
}
