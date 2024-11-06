/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:47:02 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:47:20 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory ares byte by byte.
 * 
 * The function compares the first 'n' bytes of the memory areas pointed
 * by 's1' and 's2'. It iterates through each byte, 
 * stopping when a diffrence is [found]
 *  OR 'n' bytes have been compared.
 * 
 * @param s1 Pointer to the first memory area  to compare 
 * @param s2 Pointer to the second memory area to compare.
 * @param n The number of bytes to compare. 
 * 
 * @return An integer indicating the comparison result; 
 * 			=> Returns 0 if the memory areas are identical 
 * 					for the first 'n' bytes.
 * 			=> Returen positive integer if the differing byte 
 * 					in 's1' is greter than 
 * 				in 's2' 
 * 			=> Returen negative integer if the differing 
 * 				byte in 's1' is less than in 's2' 
 *  * Example:
 * ```
 * int result1 = ft_memcmp("abc", "abd", 3);  // result1 < 0 ('c' < 'd')
 * int result2 = ft_memcmp("abc", "abc", 3);  // result2 = 0 (identical)
 * int result3 = ft_memcmp("abc", "abb", 3);  // result3 > 0 ('c' > 'b')
 * ```
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
