/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:03:17 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:28:09 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new node at the beginning of a linked list.
 *
 * This function inserts a new node (`new`) at the front of the list. It sets 
 * the `next` pointer of the new node to the current head of the list, and then 
 * updates the head pointer (`*lst`) to point to the new node, effectively making
 * it the first node in the list.
 *
 * @param lst A pointer to the head of the linked list.
 * @param new The new node to be added at the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
