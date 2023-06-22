/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:09:05 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/29 14:18:09 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && len >= ft_strlen(little))
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j])
			{
				j++;
				if (little[j] == '\0')
					return ((char *)big + i);
			}
		}
		i++;
		len--;
	}
	return (NULL);
}
