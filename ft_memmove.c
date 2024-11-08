/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:57:56 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/08 19:40:55 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
