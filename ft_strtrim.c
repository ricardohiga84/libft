/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:51:54 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/27 22:13:16 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	check_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	equal;
	int	start;

	start = 0;
	i = 0;
	while (s1[i] != '\0' || start == 0)
	{
		equal = 0;
		j = 0;
		while (set[j] != '\0' && equal == 0)
		{
			if (s1[i] == set[j])
				equal++;
			j++;
		}
		i++;
		if (equal > 0)
			start = i;
		else if (equal == 0)
			return (start);
	}
	return (start);
}

static int	check_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	equal;
	int	end;

	i = ft_strlen(s1) - 1;
	end = i;
	while (i >= 0 || end == i)
	{
		equal = 0;
		j = ft_strlen(set) - 1;
		while (j >= 0 && equal == 0)
		{
			if (s1[i] == set[j])
				equal++;
			j--;
		}
		i--;
		if (equal > 0)
			end = i;
		else if (equal == 0)
			return (end);
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = check_start(s1, set);
	end = check_end(s1, set);
	len = end - start + 1;
	if (len >= 0)
		dest = ft_substr(s1, start, len);
	else
		dest = ft_calloc(1, 1);
	return (dest);
}
