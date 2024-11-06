/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:46:24 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 11:13:19 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculate the length of a string.
 * 
 * @param s Pointer to the null-terminated string whoselength
 * 		 is to be calculated.
 * 
 * @return The number of characters in the string 
 * 			(excluding the null terminator).
 * 
 * This function iterates through each character of the string 
 * until it encounters
 * the null terminator (`'\0'`), counting the number ofcharacters.
 *  The result is the length of the string in characters.
 * 
 * * @note  ft_strlen segv when null is sended
 */
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
