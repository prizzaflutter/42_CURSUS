/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:44:09 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/08 19:40:59 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
