/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:00:14 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:52:50 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character 
 * 			of a string to create a new string.
 *
 * This function iterates over the input string `s` 
 * and applies the function `f`
 * to each character, passing the character's index and 
 * the character itself as arguments.
 * The results are used to form a new string.
 *
 * @param s The input string to modify.
 * @param f A pointer to a function that takes an unsigned integer 
 * 		(index) and a character,
 *          returning a new character for the modified string.
 * 
 * @return A newly allocated string with modified characters based on `f`.
 *         Returns `NULL` if memory allocation fails.
 *
 * Explanation:
 * - Allocate memory for a new string (`new_str`) 
 * with the same length as `s` plus one for the null terminator.
 * - If allocation fails, return `NULL`.
 * - Iterate through each character of `s`, applying 
 * `f(i, s[i])` and storing the result in `new_str`.
 * - Add a null terminator to `new_str` at the end.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
