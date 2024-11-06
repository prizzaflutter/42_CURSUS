/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:42:54 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 10:53:59 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if  a character is an ASCII character.
 * this function determines if the integer value passed as the parameter 
 * corresponds to a valid ASCII character (in the range 0-127)
 * including 0 and 127.
 * 
 * @param a The integer to check.
 * 
 * @return Returns 1 if the integer is within the ASCII range (0-127),
 * 			otherwise returns 0.
*/
int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}
