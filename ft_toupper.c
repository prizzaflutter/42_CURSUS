/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:54:46 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 15:08:19 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase to its uppercase equivalent.
 * This function takes an integer representing ASCII character
 * and converts it to uppercase if it is a lowercase letter. 
 * 
 * @param c The ASCII value of the character to be converted.
 * @return  the ASCII value of the uppercaes letter if the input 
 * 			character is lowercase; otherwise returns the original
 * 			chareacter unchanged.
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
