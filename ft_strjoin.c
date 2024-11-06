/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:56:46 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 11:03:06 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Concatenates two strings 's1' and 's2' into a newly allocated string.
 * 
 * This function allocates enough memory to store the combined contents for 's1' 
 * and 's2' along with a null terminator at the end. If either string is 'NULL'.
 * the function return 'NULL'. After allocation success, it copies 's1' into the 
 * new string 'str', followed by 's2', and finaly null-terminated the result.
 * 
 * @param s1 The first string to concatenate
 * @param s2 the second string to concatenate
 * 
 * @return A Pointer to the newly string containing 's1' follow by 's2'
 * 			Retrun 'NULL' if memory allocation fails 
 * 			OR if both 's1' and 's2' are 'NULL'
 * 
 * * Example Usage:
 * ```
 * char *result = ft_strjoin("Hello, ", "world!");
 * // result will contain "Hello, world!"
 * ```
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lenght;
	size_t	i;
	size_t	j;
/// use this case or just use this if (s1 == NUL || s2 == NULL) return NULL;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		lenght = ft_strlen(s2);
	else if (s2 == NULL)
		lenght = ft_strlen(s1);
	else
		lenght = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc((lenght + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && i < lenght)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
