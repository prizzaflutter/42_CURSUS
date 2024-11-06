/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:26:18 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:41:31 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clears a linked list by deleting all its nodes.
 *
 * This function iterates through the linked list and deletes all nodes, 
 * freeing the content of each node using the provided delete function `del`, 
 * and then freeing the memory occupied by each node itself. After all nodes 
 * are cleared, the head pointer of the list is set to NULL 
 * to indicate an empty list.
 *
 * @param lst A pointer to the head of the linked list.
 * @param del A function used to delete the content of each node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
