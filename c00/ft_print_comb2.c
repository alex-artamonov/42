/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:55:07 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/16 21:55:10 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	new_line(void)
{
	write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	char	*digits;
	int i, j, k, l;
	char	first[2];
	char	second[2];
	i = -1;
	while (++i < 10)
	{
		first[0] = i + '0';
		j = -1;
		while (++j < 10)
		{
			first[1] = j + 48;
			k = -1;
			while (++k < 10)
			{
				second[0] = k + 48;
				l = -1;
				while (++l < 10)
				{
					second[1] = l + 48;
					if (first[0] <= second[0] && first[1] < second[1])
					{
						write(1, first, 2);
						write(1, " ", 1);
						write(1, second, 2);
						if (first[0] != '9' || first[1] != '8' || second[0] != '9' || second[1] != '9')
						{
							write(1, ", ", 2);
						}
					}
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	new_line();
}
