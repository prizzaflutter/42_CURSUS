/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:37:28 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/08 19:41:42 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i++;
	}
	if (ch == '\0' && s[i] == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
