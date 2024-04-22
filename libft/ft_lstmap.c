/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:50:10 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/10 15:09:25 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*node2;
	
	if (!lst)
		return (NULL);
	new_node = NULL;
	while (lst)
	{
		node2 = ft_lstnew(f(lst->content));
		if (!node2)
		{
			ft_lstclear(&node2, (*del));
			return NULL;
		}
		ft_lstadd_back(&new_node, node2);
		lst = lst->next;
	}
	return (new_node);
}