/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:58:47 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 11:21:46 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a memory block to zero.
 * @param s Pointer to biginning of the memory block to zero out.
 * @param n Number of bytes to set to zero.
 * 
 * This function fills first `n` bytes of the memory area pointed to by `s`
 * thi zeros (0) (null bytes).
 * It is typically used to [initialze] or [clear a memory block]
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
