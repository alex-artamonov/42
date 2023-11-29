/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:58:54 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/01 00:11:04 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(void)
{
	const char	start ='0';
	const char	finish ='9';
	const char	new_line = '\n';
	const char	comma = ',';
	const char	space = ' ';

	char	x;
	char	y;
	char	z;

	x = start;
	while (x <= finish)
	{
		y = start;
		while (y <= finish)
		{
			z = start;
			while (z <= finish)
			{
				if ((x < y) && (y < z)) {
					write(1, &x, 1);
					write(1, &y, 1);
					write(1, &z, 1);
					write(1, &comma, 1);
					write(1, &space, 1);
				}	
				z++;
			}
			y++;
		}
		x++;

	}

}

int main(void)
{	
	ft_comb();
	return (0);
}
