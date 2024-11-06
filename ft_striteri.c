/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:21:04 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:51:06 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character 
 * 			of a string, modifying the string in place.
 *
 * This function iterates through the string `s`
 *  and applies the function `f` to each character,
 * passing the character's index and a pointer to the character itself.
 * This allows `f` to modify each character directly in `s`.
 *
 * @param s The string to be modified. Must be non-NULL.
 * @param f A function that takes an unsigned integer (index) 
 * 			and a pointer to a character,
 *          modifying the character at each index in the string.
 *
 * Explanation:
 * - Initialize an index `i` to track the current character's position.
 * - While iterating through `s`, call `f` with the current index 
 * 	`i` and a pointer to `s[i]`.
 * - This allows `f` to directly modify each character in `s`.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
