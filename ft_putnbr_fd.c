/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:11:07 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/06 10:50:15 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the integer `n` to the file descriptor `fd`.
 *
 * This function recursively prints each digit 
 * of the integer `n` to the specified file descriptor `fd`.
 * If `n` is negative, it handles the negative sign and
 *  uses an unsigned integer for recursive division.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write 
 * 		(e.g., 1 for stdout, 2 for stderr).
 *
 * Explanation:
 * - If `n` is negative, output a '-' character and convert 
 * `n` to a positive unsigned integer `num`.
 * - If `num` is less than 10, convert it to its ASCII 
 * character and output it.
 * - If `num` is 10 or greater, recursively call 
 * `ft_putnbr_fd` to print each digit in the correct order.
 */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
	}
	if (num < 10)
	{
		ft_putchar_fd(num + '0', fd);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}
