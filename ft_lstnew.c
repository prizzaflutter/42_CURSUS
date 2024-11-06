/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:06:33 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:45:54 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new node in a linked list.
 *
 * This function allocates memory for a new node, initializes its `content`
 * to the provided value, and sets its `next` pointer to `NULL`, making it
 * the last node in the list. It returns a pointer to the newly created node.
 *
 * @param content The content to be assigned to the `content` 
 * 			field of the new node.
 *
 * @return A pointer to the newly created node (`t_list`), 
 * 		or `NULL` if memory allocation fails.
 *
 * Explanation:
 * - The function starts by allocating memory for a new 
 * 		node of type `t_list`.
 * - If the memory allocation fails (`malloc` returns `NULL`), 
 * 		the function returns `NULL`.
 * - The `content` field of the newly created node is 
 * 		set to the provided `content` argument.
 * - The `next` pointer of the node is set to `NULL`, 
 * 		indicating that this node is not pointing to any next node.
 * - Finally, the pointer to the new node (`head`) is returned.
 */
t_list	*ft_lstnew(void	*content)
{
	t_list	*head;

	head = malloc(sizeof(struct s_list));
	if (head == NULL)
		return (NULL);
	head -> content = content;
	head ->next = NULL;
	return (head);
}
