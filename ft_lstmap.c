/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:03:05 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:44:56 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new linked list by applying a function to each element
 *        of an existing linked list.
 *
 * This function iterates through each node of the input linked list, applies
 * the function `f` to the `content` of each node, and creates a new node with
 * the transformed content. The new nodes are added to a new linked list. If
 * memory allocation fails or an error occurs, the function clears the new list
 * and returns `NULL`. The `del` function is used to free any 
 *  content if an error occurs.
 *
 * @param lst The input linked list.
 * @param f The function to apply to each element's content.
 * @param del The function to free the content of a node if an error occurs.
 *
 * @return A new linked list with transformed content,
 * 		 or `NULL` if an error occurs.
 * 
 * Explanation:
 * - The function starts by checking if `lst`, `f`, 
 * or `del` are `NULL`. If any of them are `NULL`, 
 * the function returns `NULL`, as it cannot proceed.
 * - A new empty linked list (`new_list`) is created to
 * 		 hold the transformed nodes.
 * - It then iterates through the original list (`lst`),
 * 		 applies the function `f`to each node's content, and 
 * 		reates a new node with the transformed content.
 * - If a new node cannot be created (i.e., memory allocation fails),
 *  the functionuses the `del` function to free the content and 
 * clears the newly created list by calling `ft_lstclear`, 
 * then returns `NULL`.
 * - If a new node is successfully created, it is added
 *  to the new list using `ft_lstadd_back`, and the function
 *  moves to the next node in the original list.
 * - Once all nodes in the original list are processed, 
 * the function returns the new list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
