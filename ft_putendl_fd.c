/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:46:08 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:49:50 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string `s` followed by a newline 
 * 		character to the file descriptor `fd`.
 *
 * This function uses `ft_putstr_fd` to write the string `s` 
 * 	to the specified file descriptor
 * and then writes a newline character (`\n`) 
 * to the same file descriptor, effectively
 * outputting the string followed by a line break.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write
 * 		 (e.g., 1 for stdout, 2 for stderr).
 *
 * Explanation:
 * - First, `ft_putstr_fd(s, fd)` writes the contents 
 * 			of `s` to the file descriptor `fd`.
 * - Then, `write(fd, "\n", 1)` outputs a newline character to `fd`.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
