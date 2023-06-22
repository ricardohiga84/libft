/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:14:59 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/06/01 16:56:59 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*var;
	size_t	malloc_size;

	malloc_size = nmemb * size;
	if (malloc_size != 0 && malloc_size / size != nmemb)
		return (NULL);
	var = malloc(malloc_size);
	if (var)
		ft_bzero(var, malloc_size);
	else
		return (NULL);
	return (var);
}
