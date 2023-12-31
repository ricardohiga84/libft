/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:53:35 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/04/29 20:14:45 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	n;

	n = c - 48;
	if (n >= 0 && n <= 9)
		return (2048);
	else
		return (0);
}
