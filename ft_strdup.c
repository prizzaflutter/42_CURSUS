/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:40:26 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:50:42 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a given string by allocating memory for a new copy 
 * and copying the original string.
 * 
 * This function allocates enough memory to hold a copy of the input string 's1' 
 * (including the null-terminating character) 
 * and uses 'ft_memcpy' to copy the contents 
 * from 's1' to newly allocated memory. 
 * if memory allocation fails, the function returns
 * 'NULL'.
 * @param s1 A Pointer to the original null-terminated string to bu duplicated.
 *  * Example:
 * ```
 * char *original = "Hello, world!";
 * char *copy = ft_strdup(original);
 * if (copy != NULL) {
 *     // Successfully duplicated string; use `copy` as needed
 * }
 * ```
 * @note I use malloc to allocate memory (heap) by the way
*/
char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*src;
	int		len;

	len = ft_strlen(s1) + 1;
	src = (char *)s1;
	dst = (char *) malloc (len);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, src, len);
	return (dst);
}
