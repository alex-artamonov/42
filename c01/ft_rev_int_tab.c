/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:19:37 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/05 21:22:36 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	_;

	i = 0;
	j = size - 1;
	while (j > size/2)
	{
		_ = tab[i];
		tab[i] = tab[j];
		tab[j] = _;
		i++;
		j--;
	}
}

void print_array(int *array, int len)
{
	int i = 0;
	printf("{");
	while (i < len)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("\b\b}\n");
}


int main(int argc, char *argv[])
{
	int	len = 5;
	int	array[5] = {11, 12, 13, 14, 15};
	print_array(array, len);
	ft_rev_int_tab(array, len);
	print_array(array, len);
}

