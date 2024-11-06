/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:16:13 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 15:42:43 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Campares up to 'n' characters of two strings.
 * 
 * This function compares the first 'n' characters of the strings 's1'
 * and 's2' if continues to compare each character until either a 
 * difference is found, a null terminator is reached in one of the 
 * strings or the specified number 'n' has been compared [n = 0]
 * @param s1 A Pointer to the first string to compare.
 * @param s2 A Pointer to the second string to compare.
 * @param n The maximum number of characaters to compre.
 * 
 * @return An integer indicating the diffrence between the first
 * 			 two differing characters;
 * 			=> Returns [0] if the string are equal up to the first 
 * 			'n' characters or if 'n' is 0;
 * 			=> Returns a positive integer if the first deffering character
 * 			 in 's1' is greater that in 's2'.
 * 			=> Returns a negative integer if the first deffering character 
 * 				in 's1' is less than is 's2'
 * @note The comparison is done based on the ASCII values of the 
 * characters.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n != 0 && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)(s2[i]));
}
