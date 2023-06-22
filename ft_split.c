/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:41:30 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/05/27 22:13:52 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	count_words(char const *s, char c)
{
	int				i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

static int	start_word(char const *s, char c, int start)
{
	while (s[start] == c && s[start] != '\0')
		start++;
	return (start);
}

static int	size_word(char const *s, char c, int len)
{
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		len;
	int		words;
	char	**dest;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	dest = (char **)malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		len = 0;
		start = start_word(s, c, start);
		len = size_word(s, c, start);
		dest[i] = ft_substr(s, start, len - start);
		start = len;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
