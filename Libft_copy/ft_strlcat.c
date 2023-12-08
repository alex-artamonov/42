/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:16:37 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/06 20:16:41 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;

	len_dest = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	return (len_dest + ft_strlcpy(&(dest[len_dest - 1]), src, size));
}
