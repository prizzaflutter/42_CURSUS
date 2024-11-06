/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:22:07 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 12:53:07 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string from source [src] to destinaiton [dst]
 * 			 with size limitations [dstsize].
 * 
 * This function copies up to 'dstsize - 1' characters 
 * from the string pointed to by 'src' to the buffer pointed to by 'dst',
 *  null-terminating the result. If 'dstsize' is 0, 
 * no characters are copied, and an empty string is written to 'dst'.
 *  the function returns the lenght of the source string.
 * 
 * @param dst A Pointer to the destination buffer where the s
 * 			tring will be copied.
 * @param src A pointer to the source string to be copied.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The total length of the source string 
 * 			(not including the null terminator)
 * 			This can be used to determine if the copy was truncated.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*source;

	source = (char *)src;
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = source[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(source));
}
