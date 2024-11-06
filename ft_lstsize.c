/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:42:41 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:24:26 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of elements in a linked list.
 *
 * This function traverses through the linked list starting from `lst` and
 * increments a counter for each node encountered, ultimately returning
 * the total count of nodes in the list.
 *
 * @param lst A pointer to the first node of a linked list of type `t_list`.
 *
 * @return The total number of nodes in the linked list. If `lst` is `NULL`,
 *         the function returns 0.
 *
 * Explanation:
 * - Initializes a `counter` variable to 0.
 * - Checks if `lst` is `NULL` and returns 0 if true (indicating an empty list).
 * - The `while` loop iterates through each node in the list, incrementing
 *   `counter` until reaching the end (where `lst->next` is `NULL`).
 * - Since the loop stops at the last node, a final increment is added outside
 *   the loop before returning `counter`.
 */

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	if (lst == NULL)
		return (counter);
	while (lst->next != NULL)
	{
		counter++;
		lst = lst->next;
	}
	counter++;
	return (counter);
}
