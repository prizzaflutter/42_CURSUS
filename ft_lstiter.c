/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:57:34 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:42:27 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates over a linked list and applies a function 
 * 			to each node's content.
 *
 * This function traverses the given linked list and 
 * applies the provided function `f` to the content of 
 * each node. The iteration stops once the end of the list is reached.
 * The function does not modify the list itself, 
 * it only operates on the contents of each node.
 *
 * @param lst The head of the linked list to iterate through.
 * @param f The function to apply to each node's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst->content != NULL && lst->next != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	if (lst->content != NULL)
		f(lst->content);
}
