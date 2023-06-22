/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:57:21 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/06/03 18:30:22 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;
	int	mod;

	if (c > 255)
	{
		mod = c / 256;
		c -= 256 * mod;
	}
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == c)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
