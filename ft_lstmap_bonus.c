/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:14:16 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/06/03 18:42:15 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*lst_start;

	if (!lst || !f || !del)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	lst_start = temp;
	lst = lst->next;
	while (lst != NULL)
	{
		temp->next = ft_lstnew(f(lst->content));
		temp = temp->next;
		if (!temp)
		{
			del(temp->content);
			return (NULL);
		}
		lst = lst->next;
	}
	return (lst_start);
}
