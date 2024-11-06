/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:33:40 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 11:02:09 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a character is printable.
 * 
 * @param a The ASCII code of the character to check.
 * @return Returns 1 if the character is printable, otherwise returns 0.
 * 
 * This function checks if the ASCII code falls within the range of printable 
 * characters, which is 32 to 126 including 32 and 126.
 * The range breakdown is as follows:
 * 
 * - 32 (' '): Space character
 * - 33–126: Printable symbols, numbers, uppercase and lowercase letters
 *   - [33–47: Special characters (e.g., !, ", #, $, etc.)]
 *   - [48–57: Digits (0–9)]
 *   - [58–64: Special characters (e.g., :, ;, <, =, etc.)]
 *   - [65–90: Uppercase letters (A–Z)]
 *   - [91–96: Special characters (e.g., [, \, ], ^, _, `)]
 *   - [97–122: Lowercase letters (a–z)]
 *   - [123–126: Special characters (e.g., {, |, }, ~)]
 */
int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}
