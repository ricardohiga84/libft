/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:54:30 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/20 17:22:08 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	neg_pos;

	i = 0;
	num = 0;
	neg_pos = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == 45)
	{
		neg_pos = -1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	if (ft_isdigit(nptr[i]))
	{
		while (ft_isdigit(nptr[i]))
			num = (num * 10) + (nptr[i++] - 48);
	}
	else
		return (0);
	return (num * neg_pos);
}
