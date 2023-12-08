/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:19:20 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/30 18:15:14 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	const int	lower = 0;
	const int	upper = 127;

	if (c < lower || c > upper)
		return (0);
	else
		return (1);
}
