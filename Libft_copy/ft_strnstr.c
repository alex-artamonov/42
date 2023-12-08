/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:48 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/06 18:34:51 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);

static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	needle_len;
	unsigned int	haystack_len;

	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (needle_len > len || needle_len > haystack_len)
		return (0);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= (len - needle_len))
	{
		if ((haystack[0] == needle[0]) \
			&& (0 == ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
