/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:13:10 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/04 22:45:10 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list* new)
{
	t_list	*new_node;

	new_node = new;
	if (!new_node)
		return ;
	new_node->next = *lst;
	*lst = new_node;
}
