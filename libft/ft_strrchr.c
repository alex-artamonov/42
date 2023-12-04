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

#include <string.h>

/* 7.24.5.5 The strrchr function */
char *ft_strrchr(const char *s, int c) 
{
    const char *p = NULL;

	// while (*s)
	// {
	// 	if (*s == (char)c)
    //         p = s;
    //     if (*s == '\0')
    //         return (char *)p;
	// 	s++;
	// }

    for (;;) {
        if (*s == (char)c)
            p = s;
        if (*s++ == '\0')
            return (char *)p;
    }
}

// char	*ft_strrchr(char *s, int c)
// {
// 	int		i;
// 	char	*dummy;
// 	unsigned char 	ch;

// 	ch = (unsigned char)c;
// 	dummy = "\0";

// 	// while (c >= 256)
// 	// {
// 	// 	c -= 256;
// 	// }
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == ch)
// 			dummy = &s[i];
// 		i++;
// 	}
// 	if (ch == '\0')
// 		return (&s[i]);
// 	return (dummy);
// }
// char	*ft_strrchr(char *s, int c)
// {
// 	int		i;

// 	while (c >= 256)
// 	{
// 		c -= 256;
// 	}
// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	if (c == '\0')
// 		return (&s[i]);
// 	if (i)
// 		i --;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 		{
// 			return (&s[i]);
// 		}
// 		i--;
// 	}
// 	return (0);
// }
