/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:54:14 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:25:56 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of a linked list.
 *
 * This function iterates through the given linked list and returns the last
 * node. If the list is empty (i.e., `lst` is `NULL`), the function returns
 * `NULL`. If the list contains one or more nodes, it traverses the list until
 * it reaches the last node and returns it.
 *
 * @param lst The head of the linked list.
 *
 * @return The last node in the list, or `NULL` if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
