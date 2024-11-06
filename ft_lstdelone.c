/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:08:11 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:42:05 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes a single node from the linked list.
 *
 * This function deletes a single node from the linked list. 
 * It frees the memory allocated for the node's content 
 * using the provided delete function `del`, and 
 * then frees the memory for the node itself. This function only affects the 
 * current node, and does not modify or delete any other nodes in the list.
 *
 * @param lst The node to be deleted.
 * @param del A function used to delete the content of the node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
