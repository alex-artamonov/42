/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cyclec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:16:11 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/16 21:16:22 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

const int	DIGIT = 48;
void	inner_cycle(int n, int j)
{
	int			i;
	char		mask[10];

	i = 0;
	while (i < n)
		// while (j < 9)
		{
			mask[i] = j + DIGIT;
			write(1, mask, n + 1);
			// j++;
			i++;
			mask[i] = '\n';

		}
	// puts("hi from inner");
}

void    ft_print_combn(int n)
{
	int			i;
	int			j;

	i = 0;	
	while (i < 10)
	{
		// write(1, &digits[i], 1);
		inner_cycle(n, i);
		write(1, ", ", 2);
		i++;
	}
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    int n;

    n = atoi(argv[1]);
	ft_print_combn(n);
	write(1, "\n", 1);
}
