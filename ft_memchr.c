/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:05:01 by iaskour           #+#    #+#             */
/*   Updated: 2024/10/26 19:13:44 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	char	ch;
	size_t	i;

	ptr = (char *)s;
	ch = (char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
