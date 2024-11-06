/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:44:46 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 13:58:26 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenate two strings safely with a size limit.
 *
 * This function appends the string `src` to the end of the string `dst`
 * while ensuring that the destination buffer does not overflow. It also
 * guarantees that the resulting string in `dst` is null-terminated.
 *
 * @param dst Pointer to the destination string buffer. It must be
 *                  large enough to hold the existing contents of `dst`,
 *                  plus the contents of `src`, and a null terminator.
 * @param src Pointer to the source string to be appended.
 * @param dstsize The total size of the destination buffer `dst`.
 *                       This determines how many characters can be safely
 *                       copied from `src` and ensures that `dst` remains
 *                       null-terminated.
 *
 * @return The total length of the string that would have been created
 *         if enough space were available. This is the length of `dst` 
 *         plus the length of `src`. If `dstsize` is less than or equal
 *         to the length of `dst`, the length of `src` plus `dstsize` 
 *         is returned, indicating how much space would be needed to 
 *         fully concatenate the strings.
 *
 * @note If `dstsize` is less than or equal to the length of `dst`, no
 *       characters from `src` will be copied, and `dst` will remain
 *       unchanged except for the null terminator being added if space
 *       permits.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (dstsize - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
