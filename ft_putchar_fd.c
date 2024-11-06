/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:37:27 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:49:11 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes the character `c` to the specified file descriptor `fd`.
 *
 * This function uses the `write` system call to output a single character
 * to the provided file descriptor. It’s typically used for writing individual
 * characters to standard output (fd = 1), standard error (fd = 2), or a file.
 *
 * @param c The character to output.
 * @param fd The file descriptor on which to write 
 * 			(1 for stdout, 2 for stderr, or a file descriptor).
 *
 * Explanation:
 * - `write(fd, &c, 1)` sends the address of `c` to `fd`,
 * 			 writing one byte (the character itself).
 * - This function is low-level and generally serves as 
 * 			a helper in more complex output functions.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
