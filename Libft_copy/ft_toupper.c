/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:20:54 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/30 18:25:06 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}

int	ft_toupper(int c)
{
	const int	correction = 32;

	if (ft_islower(c))
		return (c - correction);
	else
		return (c);
}
