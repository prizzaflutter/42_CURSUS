/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:31:09 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/08 19:42:43 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_true(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	if (!s1 || (!s1 && !set))
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	j = ft_strlen(s1);
	while (is_true(set, s1[i]) == 1)
		i++;
	while (j > i && is_true(set, s1[j - 1]) == 1)
		j--;
	return (ft_substr(s1, i, j - i));
}
