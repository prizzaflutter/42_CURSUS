/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:40:26 by iaskour           #+#    #+#             */
/*   Updated: 2024/10/30 19:24:43 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	ft_strlcpy(dst, src, len);
	return (dst);
}
