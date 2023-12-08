/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:19:20 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/30 18:22:45 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	const int	lower = 32;
	const int	upper = 126;

	if (c < lower || c > upper)
		return (0);
	else
		return (1);
}
