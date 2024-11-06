/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:53:04 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 15:08:02 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a uppercase to its lowercase equivalent.
 * This function takes an integer representing ASCII character
 * and converts it to lowercaes if it is a uppercase letter. 
 * 
 * @param c The ASCII value of the character to be converted.
 * @return  the ASCII value of the uppercaes letter if the input 
 * 			character is lowercase; otherwise returns the original
 * 			chareacter unchanged.
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
