/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:03:31 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 15:23:39 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds the last occurrence of a character in a string.
 * 
 * This function searchs for the last occurrence of character 
 * (converted to a 'char')'c' in a string 's'.
 * if 'c' is found, the function returns a pointer to the position of
 * this last occurrence whithin the string. 
 * if 'c' is not found, or c = '\0' => return NULL of  a pointer to null
 *  character at the end of 's' respectively.
 * @param s The null-terminated string to search in.
 * @param c the character to search for in 's' string.
 * 
 * @return A Pointer to the last occurrence of 'c' in 's' , or NULL 
 * if 'c' is not found whithin the string, if 'c' is '\0',a pointer to the
 * null terminator of 's' returned.
*/
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
