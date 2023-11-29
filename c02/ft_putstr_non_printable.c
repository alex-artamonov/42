/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:38:41 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/11 20:49:55 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{	
		c = str[i];
		if (32 <= c && c <= 126)
			// c = str[i];
			write(1, &c, 1);
		else
		{
			// c = 'X';
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[c / 16], 1);
			// write(1, "0", 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		// printf("%c", c);
		i++;
	}
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = "Coucou\ntu vas bien ?";
	str2 = "Coucou\0atu vas bien ?";
	ft_putstr_non_printable(str1);
	puts("\n");
	puts(str1);
	puts(str2);
	i = 0;
	// while (i < 20){ 
	// 	if (str1[i] != str2[i])
	// 		write(1, &str2[i], 1);
	// 	i++;
	// }

	// if (str2 == str1)
	// 	puts("test passed");
	// else
	// 	puts("test didn't pass");
	// write(1, "\\", 1);
}
