/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:38:48 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 10:46:54 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to an integer.
 * 
 * This function parses a C-string (const char *str) to convert its numeric
 * content into an integer. It handles optional leading whitespace,
 * an optional '+' or '-' sign to indicate the sign of the result, and
 * sequences of numeric digits (0-9).
 * 
 * @param str Pointer to the C-string to be converted.
 * 
 * @return The integer value represented by the characters in str. 
 * Returns 0 if there are no numeric characters or if conversion is unsuccessful.
 * exemeple : "  ++2423string"    resules : 0;
 * exemeple : "  +2423string"    resules : 2423;
 * exemeple : "  -2423string"    resules : -2423;
 * exemeple : "  string"    resules : 0;
 * exemeple : NULL    resules : segmentation fault;
 * 
 * @note Assumes that the input string contains only valid characters.
 */
int	ft_atoi(const	char *str)
{
	int	num;
	int	muns;
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	muns = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			muns = -1;
		i++;
	}
	num = 0;
	while (ft_isdigit(str[i]))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * muns);
}
