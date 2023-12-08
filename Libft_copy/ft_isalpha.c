/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:20:54 by aartamon          #+#    #+#             */
/*   Updated: 2023/11/30 18:11:45 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}

static int	ft_isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}
