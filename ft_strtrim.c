/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:31:09 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:55:18 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is present in a given set of characters.
 *
 * This function iterates through `set` to see if character `c` exists within it.
 * If `c` is found, it returns `1`; otherwise, it returns `0`.
 *
 * @param set The set of characters to search.
 * @param c The character to search for within `set`.
 * 
 * @return `1` if `c` is found in `set`, otherwise `0`.
 */
static	int	is_true(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Trims characters from the start and end 
 * 	of a string based on a character set.
 *
 * This function removes any characters from the beginning and end of `s1`
 * that are present in `set`. It allocates memory for a new trimmed string,
 * which contains the middle portion of `s1`
 *  with the specified characters removed.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to remove from 
 * 		the start and end of `s1`.
 * 
 * @return A new string without the characters in `set`
 *  at the start and end. Returns `NULL` if memory allocation fails.
 *
 * Explanation:
 * - First, it checks if `s1` or both `s1` and `set` are `NULL`.
 * - If `set` is `NULL`, it duplicates `s1` since no trimming is needed.
 * - Otherwise, it calculates the start (`i`) and end (`j`) indices to define
 *   the portion of `s1` to retain, using 
 * 	`is_true` to detect unwanted characters.
 * - It then uses `ft_substr` to create a substring from 
 * 		`i` to `j` (end of trimmed area).
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	if (!s1 || (!s1 && !set))
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	j = ft_strlen(s1);
	while (is_true(set, s1[i]) == 1)
		i++;
	while (j > i && is_true(set, s1[j - 1]) == 1)
		j--;
	return (ft_substr(s1, i, j - i));
}
