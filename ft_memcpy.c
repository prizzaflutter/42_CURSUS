/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:05:12 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:48:28 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies `n` bytes from memory area `src` to memory area `dst`.
 *
 * This function copies `n` bytes from the source 
 * memory block `src` to the destinationmemory 
 * block `dst`. If `src` and `dst` overlap, behavior 
 * is undefined, so `ft_memcpy` should only be 
 * used when `src` and `dst` are known to be separate areas. 
 *
 * @param dst Pointer to the destination memory 
 * 			area where bytes will be copied.
 * @param src Pointer to the source memory area 
 * 			from which bytes are copied.
 * @param n The number of bytes to copy from `src` to `dst`.
 *
 * @return Returns a pointer to `dst`.
 *
 * Explanation:
 * - The function begins by casting `dst` and `src` 
 * to `unsigned char *` pointers, allowing for byte-by-byte copying.
 * - If both `dst` and `src` are NULL, it returns `dst` 
 * immediately (could indicate no copying needed in case of null pointers).
 * - The `while` loop iterates through each byte up to `n`, 
 * copying each byte from `src` to `dst`.
 * - Finally, it returns the original pointer to `dst`
 * 	 for chaining or reference.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	const char		*sorc;
	size_t			i;

	dest = (unsigned char *) dst;
	sorc = (const char *) src;
	if (dest == NULL && sorc == NULL)
		return (dst);
	i = 0;
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dst);
}
