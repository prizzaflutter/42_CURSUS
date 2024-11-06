/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:12:51 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 10:19:50 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Check if parametre is alpha
/// @param a
/// @return Returns 1 if the ASCII code of parametre is a 
/// @return alpha (65-90 || 97-122), otherwise returns 0
int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}
