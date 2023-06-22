/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:29:59 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/27 22:14:33 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;
	char			*src;

	if (!s)
		return (NULL);
	src = (char *)s;
	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = f(i, src[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
