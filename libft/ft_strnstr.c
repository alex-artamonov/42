/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:48 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/06 16:44:01 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int	ft_strncmp(const char *s1, const char *s2, unsigned int n);

char * ft_strstr(const char *s1, const char *s2)
{
	const char	*null = 0;
	int			i;
	int 		j;
	if (s2[0] == '\0')
	{
		puts("returning empty value");
		return ((char *)s1);
	}
	while (*s1)
	{
		i = 0;
		while (*(s1 + i) == s2[i])
		{
			// printf("before if in while: s1='%s', s2='%s', result='%s', s1*='%c', *s2='%c'\n", s1, s2, result, *s1, *s2);
			if (s2[i+1] == '\0')
			{
				printf("if in while: s1='%s', s2='%s', result='%s', s1*='%c', *s2='%c'\n", s1, s2, null, *s1, *s2);
				return ((char *)s1);
			}
			i++;
			printf("after i++ in while: s1='%s', s2='%s', result='%s', s1*='%c', *s2='%c'\n", s1, s2, null, *s1, *s2);
		}

		if (! s1)
			{
				printf("before s1++: s1='%s', s2='%s', result='%s', s1*='%c', *s2='%c'\n", s1, s2, null, *s1, *s2);
			}
		s1++;
	}
	return ((char *)null);
}

char * tft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	int			i;
	int 		j;
	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	if (! n)
		return (0);

	while (*(s1) && n)
	{
		i = 0;
		printf("before inner while: s1='%s', s2[%d]='%c', n='%d', s1*='%c', *s2='%c'\n", s1, i, s2[i], n, *s1, *s2);
		while (*(s1 + i) == s2[i])
		{
			printf("before if in while: s1='%s', s2[%d]='%c', n='%d', s1*='%c', *s2='%c'\n", s1, i, s2[i], n, *s1, *s2);
			if (s2[i+1] == '\0')
			{
				printf("if in while: s1='%s', s2[%d]='%c', n='%d', s1*='%c', *s2='%c'\n", s1, i, s2[i], n, *s1, *s2);
				return ((char *)s1);
			}

			i++;
			n--;
			printf("after i++ in while: s1='%s', s2[%d]='%c', n='%d', s1*='%c', *s2='%c'\n", s1, i, s2[i], n, *s1, *s2);
			if (!n && s2[i])
				return (0);
		}
		printf("after inner while: s1='%s', s2[%d]='%c', n='%d', s1*='%c', *s2='%c'\n", s1, i, s2[i], n, *s1, *s2);
		s1++;
		n--;
		// if (!n && s2[i])
		// 	return (0);
	}
	puts("just before final return (0)");
	return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
		unsigned int 	i;
		unsigned int	needle_len;

		needle_len = 0;
		while (needle[++needle_len]);
		printf("needle_len=%u\n", needle_len);

		if (needle_len == 0)
			return (char *)haystack;

		// if (0 == (needle_len = strnlen(needle, len)))
		//         return (char *)haystack;

		// for (i=0; i<=(int)(len-needle_len); i++)
		// {
		//         if ((haystack[0] == needle[0]) &&
		//                 (0 == ft_strncmp(haystack, needle, needle_len)))
		//                 return (char *)haystack;

		//         haystack++;
		// }
		i = 0;
		while (i <= (len - needle_len))
		{
			if ((haystack[0] == needle[0]) &&
						(0 == ft_strncmp(haystack, needle, needle_len)))
						return (char *)haystack;
				haystack++;
		}
		return 0;
}




void	test_str(const char *s1, const char *s2)
{
	const char	*ft_res;
	const char	*st_res;

	ft_res = ft_strstr(s1, s2);
	st_res = strstr(s1, s2);
	printf("Testing %s\n",  __func__);
	if (st_res == ft_res)
		printf("\ttest passed, ret value '%s\': \n", ft_res);
	else
		printf("\ttest didn't pass, strstr='%s\', ft_strnstr='%s'\n", \
		st_res, ft_res);

}

void	test_strn(const char *s1, const char *s2, unsigned int n)
{

	const char	*ft_res;
	const char	*st_res;

	ft_res = ft_strnstr(s1, s2, n);
	st_res = strnstr(s1, s2, n);
	printf("Testing %s\n",  __func__);
	if (st_res == ft_res)
		printf("\ttest passed, ret value '%s\': \n", ft_res);
	else
		printf("\ttest didn't pass, strnstr='%s\', ft_strnstr='%s'\n", st_res, ft_res);

}



int main(int argc, char **argv)
{
	if (argc < 4)
		{
				puts("Enter at least three arguments, the third - an integer");
				return (0);
		}
	const char    *s1;
	const char    *s2;
		s1 = argv[1];
		s2 = argv[2];
	unsigned int     i;
	// // char    *s;
	i = (unsigned int)atoi(argv[3]);
	// s = test(w, i);
	// printf("result: '%s'\n", test(w, i));
	// printf("result: '%s'\n", ft_strnstr(s1, s2, i));
	// char s1[] = "GeeksforGeeks";
	// char s2[] = "for";
	// char* p;

	// // Find first occurrence of s2 in s1
	// p = strstr(s1, s2);

	// // Prints the result
	// if (p) {
	//     printf("String found\n");
	//     printf("First occurrence of string '%s' in '%s' is "
	//            "'%s'",
	//            s2, s1, p);
	// }
	// else
	//     printf("String not found\n");
	// test_strnstr(s1, s2);
	// printf("s1=%s, s2=%s\n", s1, s2);
	char	*s3 = 0;

	s3 = "qwer";
	// s3 = s1;
	// s3[0] = 'x';
	// s3[1] = 'x';
	// printf("s1='%s', s2='%s', s3 = '%s'\n", s1, s2, s3);
	// test_str(s1, s2);
	test_strn(s1, s2, i);
	// printf("%s\n", strnstr(s1, s2, i));

	// printf("strnstr(\"%s\", \"%s\", %d) = %s\n", s1, s2, i, strnstr(s1, s2, i));

	// int	i;
	// i = 0;
	// while (s3[i])
	// {
	// 	i++;
	// }
	// i = 0;
	// while (s3[++i]);
	// printf("len '%s'=%d\n", s3, i);

	return (0);
}
