/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:37:28 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 15:30:09 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds the first occurrence of a character in string.
 * 
 * This function searchs for the first occurrence of the character 'c'
 * (converted to char) int the null-terminated 's'.
 * @param s the null-terminated string to search in.
 * @param c The character to search for.
 * 
 * @return A Pointer to the first occurrence of 'c' in 's', or NULL if 
 * 'c' is not found within 's', If 'c' = '\0' , a Pointer to 
 * the null terminator of 's' is returned.
*/
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
