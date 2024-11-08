/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:09:34 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/08 21:04:36 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	unsigned int	lenght;
	char			*substr;
	size_t			i;

	if (s == NULL)
		return (NULL);
	size = (unsigned int) ft_strlen(s);
	lenght = (unsigned int) len;
	if (start > size || size == 0)
		return (ft_strdup(""));
	if (lenght > (size - start))
		lenght = (size - start);
	substr = (char *)malloc((lenght + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
