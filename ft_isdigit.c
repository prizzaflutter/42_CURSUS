/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:39:23 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 10:21:38 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if parametre is digit
/// @param a
/// @return Returns 1 if the character is a digit (0-9), otherwise returns 0
int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}
