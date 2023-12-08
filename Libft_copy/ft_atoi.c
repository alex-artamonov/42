/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:30:42 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/01 17:50:03 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	char_in_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int			result;
	int			plus_minus;
	const char	*spaces = "\t\v\f\r\n ";
	const char	*digits_plus = "-+0123456789";

	result = 0;
	plus_minus = 1;
	while (char_in_str(*str, spaces))
	{
		str++;
	}
	if (! char_in_str(*str, digits_plus))
		return (0);
	if (char_in_str(*str, "-+"))
	{
		if (*str == '-')
			plus_minus = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * plus_minus);
}
