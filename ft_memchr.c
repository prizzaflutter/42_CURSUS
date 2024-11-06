/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:05:01 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 11:55:29 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a block of memory
 * 
 * This function scans the initial 'n' bytes of the memory area pointed
 * to by 's' for the first instance of the character 'c'.
 * 
 * @param s Pointer to the memeory area to be scanned.
 * @param c The caracter to locate (as an int)
 * @param n The number of bytes to scan.
 * 
 * @return A pointer to the first occurence of the character 'c' in the memory 
 * 			area 's', or [NULL] if the character is not found within the 
 * 			first 'n' bytes.
 * @return [segmentation fault if s == NULL]
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t			i;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
