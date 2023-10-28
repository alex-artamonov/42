/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 00:32:11 by aartamon          #+#    #+#             */
/*   Updated: 2023/10/28 00:51:34 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void form_row(int finish, char first_last, char middle)
{
	int	x;
	x = 0;
	char output;
	while (x < finish) {
		if (x == 0 || x == (finish - 1)) {
			output = first_last;
		}
		else {
			output = middle;
		}
		ft_putchar(output);
		x++;
	}
}

void	rush(int i, int j)
{	
	int y;
	y = 0;
	while (y < j) {
		if (y == 0 || y == (j - 1)) {
			form_row(i, 'o', '-');
		}
		else {
			form_row(i, '|', ' ');
		}		
		ft_putchar('\n');
		y++;	
	}
}	
