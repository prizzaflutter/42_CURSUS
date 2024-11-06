/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:12:19 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/05 15:45:50 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Check if parametre a is alpha OR is a digit
/// @param a
/// @return Returns 1 if the ASCII code of parametre a is a 
/// @return alpha (65-90 || 97-122), OR is a digit (0-9) otherwise returns 0
int	ft_isalnum(int a)
{
	if (ft_isdigit(a) != 0 || ft_isalpha(a) != 0)
		return (1);
	return (0);
}
