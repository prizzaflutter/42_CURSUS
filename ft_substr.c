/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:09:34 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:55:52 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring froma given string 
 * start from index 'start' and up to 'len' characters. 
 * 
 * This function allocates memory for a substring 
 * that begins at the 'start' position 
 * in the string 's' and up to 'len' characters 
 * OR fewer if the remaining characters 
 * from 'start' are less than 'len'.
 * If 'start' exceeds the length of 's', the 
 * function returns an empty string. using 
 * 'ft_calloc' function 
 * @param s The original null-terminated string
 *  from which to extract the substring.
 * @param start the starting index whithin 's' 
 * from which to begin the substring. 
 * @param len Them maximum number of characters
 *  to include in the substring.
 * 
 * @return A Pointer to the newly allocated substring. Return 'NULL' if 
 * memory allocation fails Or an empty string if 'start' is out of bounds.
 * Example Usage:
 * -------------------
 * char *original = "Hello, world!";
 * -------------------
 * char *sub = ft_substr(original, 7, 5); 
 * sub = "world"
 * 
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	unsigned int	lenght;
	char			*substr;
	size_t			i;

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
