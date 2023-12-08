/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:30:42 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/01 15:16:56 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *c)
{
	unsigned long	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}