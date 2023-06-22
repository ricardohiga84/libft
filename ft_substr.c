/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:28:05 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/27 22:07:34 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	if (start + len > strlen)
		len = strlen - start;
	sub = (char *)ft_calloc((len + 1), sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < (int)len && start < strlen)
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
}
