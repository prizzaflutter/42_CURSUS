/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:57:56 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 12:54:04 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies memory area from source to destination,
 * 			 handling overlapping regions.
 * 
 * Then function move 'len' bytes form memory area pointed by 'src'
 * to the memory area pointer by 'dst'. It handles the case where 
 * the source and destincation  memory areas overlap by ensuring 
 * that data is copied correctly without corruption.
 * 
 * @param dst A Pointer to the destination memory area where content is 
 * 			to be copied.
 * @param src A Pointer to the source memory area where content is copied from.
 * @param len Then number of bytes to copy from source to destication.
 * 
 * @return A Pointer to the destincation memory area ('dst').
 * 			Returns NULL if both 'dst' and 'src' are NULL.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d_st;
	char	*s_rc;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d_st = (char *)dst;
	s_rc = (char *)src;
	i = 0;
	if (d_st > s_rc && d_st < s_rc + len)
		while (len-- > 0)
			d_st[len] = s_rc[len];
	else
	{
		while (i < len)
		{
			d_st[i] = s_rc[i];
			i++;
		}
	}
	return (dst);
}
