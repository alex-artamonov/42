/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:20:54 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/30 18:24:37 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}

int	ft_tolower(int c)
{
	const int	correction = 32;

	if (ft_isupper(c))
		return (c + correction);
	else
		return (c);
}
