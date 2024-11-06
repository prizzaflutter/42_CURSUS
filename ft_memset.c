/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:44:09 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 11:40:18 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill a memory block with a specified byte value.
 * 
 * @param ptr Pointer to the beginning of the memory block to fill.
 * @param c Byte value to set in each byte of the memory block
 * @param len Number of bytes to set to the value.
 * @return The original pointer to the memory block.
 * 
 * This function sets the first `len` bytes of the memory area
 * 	pointed to by `ptr` to the specified byte value `c`.
 */
void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	ch;
	size_t			i;

	ptr1 = (unsigned char *)ptr;
	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr1[i] = ch;
		i++;
	}
	return (ptr1);
}
