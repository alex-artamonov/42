/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:24:50 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/12 12:38:33 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i == size)
		{
			i--;
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	if (size == 0)
		dest = "\0";
	else
		dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
void	test(int size)
{
	char	*src;
	char	dest[13];
	char	dest2[13];
	int		r;
	int		r2;

	src = "Hello there!";
	r = strlcpy(dest, src, size);
	r2 = ft_strlcpy(dest2, src, size);
	printf("strlcpy:\ncopied '%s' into '%s', length %d\n",
		src, dest, r);
	printf("ft_strlcpy:\ncopied '%s' into '%s', length %d\n",
		src, dest2, r2);
	if (*dest == *dest2 && r == r2)
		puts("test passed");
	else
		puts("test didn't  pass");
}

int	main(void)
{
	test(13);
	test(10);
	test(1);
	test(0);
	return (0);
}*/
