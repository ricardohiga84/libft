/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:05:31 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/27 21:42:27 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;

	s = dest;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*s = *(char *)src;
		src++;
		s++;
		n--;
	}
	return (dest);
}
