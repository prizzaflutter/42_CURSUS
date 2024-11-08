/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:03:31 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/08 19:42:37 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	*last_occurrence;
	char	ch;

	i = 0;
	last_occurrence = NULL;
	ch = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			last_occurrence = (char *)&s[i];
		}
		i++;
	}
	if (ch == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return ((char *)last_occurrence);
}
