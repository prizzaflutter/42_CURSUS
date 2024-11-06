/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:48:47 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:39:45 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the number of digits needed to represent an integer.
 * 
 * This function counts the total number of digits 
 * required to represent an integer,excluding the sign 
 * if it's negative. If 'number' is 0 it returns 1 since only one 
 * character ('0') is nedded.
 * 
 * @param number the integer to calculate the length fo.
 * 
 * @return The number of characters required to represent 'number' as a string.
 * 
 *  * Example:
 * - `count_lengh(123)` returns 3.
 * - `count_lengh(-4567)` returns 5 (4 digits + 1 for the sign).
*/
static int	count_lengh(int number)
{
	int	counter;

	counter = 0;
	if (number < 0)
	{
		number = -number;
		counter++;
	}
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	return (counter);
}

/**
 * @brief Converts an integer to null-terminated string. 
 * This function creates a string representation of an integeer 'n',
 * allocating sufficient memory to hold the integer as a string, including 
 * a munis sign if 'n' is negative. memory is dynamically allocated and must
 * be freed by the caller.
 * 
 * @param  n the integer to convert.
 * @return A Pointer to the string representation of 'n'.
 * 		@return NULL if the memory allocation fails.
*/
char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	number;
	size_t			length;

	number = n;
	if (n < 0)
		number = -n;
	length = count_lengh(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	while (length > 0 && number != 0)
	{
		length--;
		str[length] = (number % 10) + 48;
		number /= 10;
	}
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	return (str);
}
