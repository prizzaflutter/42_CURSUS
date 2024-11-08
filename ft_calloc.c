/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:15:55 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:39:14 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of 'count' elements, each of 'size'
 *  bytes, and initialzes all bytes in the allocated storage to zero (0).
 * 
 * This function allocates memory for an array withi 'count' elements, each 
 * of 'size' bytes, and sel all bytes to 0 using 'ft_memset',
 * If the allocation fails it returns 'NULL'
 * 
 * @param count the number of elements to allocate. 
 * @param size  The size of each element in bytes.
 * @return A Pointer to the allocated memory bloack initialized to zero, or 
 * 'NULL' if the allocation fails.
 * * Example:
 * ``` 
 * Allocates space for 5 integers, all set to 0
 * int *arr = (int *)ft_calloc(5, sizeof(int))
 * if (arr == NULL) {
 *     // handle allocation failure
 * }
 * ```
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	ft_memset(tmp, 0, (count * size));
	return (tmp);
}
