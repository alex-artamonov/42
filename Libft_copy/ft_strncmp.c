/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:19:20 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/15 19:37:18 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}
// void	test(char *str1, char *str2, unsigned int n)
// {
// 	if (strncmp(str1, str2, n) == ft_strncmp(str1, str2, n))
// 		printf("str1='%s', str2='%s': test passed\n", str1, str2);
// 	else
// 	{
// 		printf("str1='%s', str2='%s': test didn't pass:\n", str1, str2);
// 		printf("\tstrcmp(str1, str2)=%d, ft_strcmp(str1, str2)=%d\n",
// 				strncmp(str1, str2, n), ft_strncmp(str1, str2, n));
// 	}
// }
// int	main(int argc, char **argv)
// {
// 	char	*str1 = "abcU";
// 	char	*str2 = "omg3";
// 	char	*str3 = "abcD";
// 	char	*str4 = "a";
// 	char	*str5 = "";
// 	char	*str6 = "45\tfd";
// 	int		temp;
// 	size_t	n;
// if (argc < 2)
// {
// 	printf("Enter at least one argument\n");
// 	return (0);
// }
// 	temp = atoi(argv[1]);
// 	n = (size_t)temp;
// 	test(str1, str2, n);
// 	test(str1, str3, n);
// 	test(str1, str4, n);
// 	test(str4, str1, n);
// 	test(str1, str5, n);
// 	test(str5, str1, n);
// 	test(str1, str6, n);
//     test("abcdef", "abc\375xx", 5);
// 	return (0);
// }
