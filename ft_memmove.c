/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:36:17 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/29 14:34:21 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (cdest == NULL && csrc == NULL)
		return (NULL);
	if ((char *)csrc > (char *)cdest)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n-- > 0)
			cdest[n] = csrc[n];
	}
	return (cdest);
}
