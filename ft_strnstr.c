/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:17:00 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:54:09 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the substring 'needle' within 
 * 			the string 'haystack', but searches only up to 'len' characters.
 * 
 * This function searches for the first occurrence of the substring 'needle'
 * within the first 'len' characters of the string 'haystack'. it returns 
 *  a pointer to the beginning of the located substring, o 'NULL' if the 
 * substring in not found within the spcified length.
 * @param haystack The main string i which to search. 
 * @param needle The substring to search for whithin 'haystack'.
 * @param len The maximum number of characters to search in 'haystack'.
 * 
 * @return A Pointer to the start of the located substring within 'haystack', o 
 * 'NULL' if 'needle' is not found within the first 'len' characters.
 *  * ```
 * // points to "world"
 * char *result1 = ft_strnstr("hello world", "world", 11); 
 *  // returns NULL (out of range)
 * char *result2 = ft_strnstr("hello world", "world", 5); 
 * // points to "hello" (empty needle)
 * char *result3 = ft_strnstr("hello", "", 5); 
 * ```
 * @note -If 'needle' is an empty string, 'haystack' is returned.
 * 		 -if 'needle' is not found within the specified length,
 * 		 'NULL' is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	if (needle[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && (i + j) < len && str[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
