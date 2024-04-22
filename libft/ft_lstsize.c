/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:30:25 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/05 14:44:22 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*curr;
	int		i;

	curr = lst;
	i = 0;
	while (curr != 0)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

/*int	ft_lstsize(t_list *lst) RECURSIVE 
{
	if (!lst)
		return (0);
	return (1 + ft_lstsize(lst->next));	
}
*/