/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:16:11 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/02 19:51:28 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*p = 0;

	while (1)
	{
		if (*s == (char)c)
			p = s;
		if (*s == '\0')
			return ((char *)p);
		s++;
	}
}
