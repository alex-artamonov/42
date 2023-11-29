/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:27:10 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/14 20:47:34 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char		c;
	const char	*digits = "0123456789abcdef";
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{	
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
		return;
	}
	if (-1 < nb && nb < 16)
	{
		write(1, &digits[nb], 1);
	}
	else
	{
		ft_putnbr(nb / 16);
		write(1, &digits[nb % 16], 1);
		
	}
}

int	main(int argc, char **argv)
{
	int	n;	

	if (argc != 2)
	{
		return (1);
	}
	n = atoi(argv[1]);
	ft_putnbr(n);
	write(1, "\n", 1);
}
