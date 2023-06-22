/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:26:57 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/29 14:39:28 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;
	size_t	rtn;

	if ((!dest || !src) && size == 0)
		return (0);
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	rtn = len_dest + len_src;
	if (size == 0)
		rtn = len_src;
	else if (size < len_dest)
		rtn = len_src + size;
	else if (size > len_src || size > len_dest)
	{
		size = size - len_dest;
		i = 0;
		while ((src[i] != '\0') && (i < size - 1))
			dest[len_dest++] = src[i++];
		dest[len_dest] = '\0';
	}
	return (rtn);
}
