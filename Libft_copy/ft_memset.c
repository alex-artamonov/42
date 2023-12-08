/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:36:35 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/06 19:36:40 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	char			*dummy;
	unsigned int	i;

	i = 0;
	dummy = b;
	while (i < len)
	{
		dummy[i] = c;
		i++;
	}
	return (b);
}
