/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:38:48 by iaskour           #+#    #+#             */
/*   Updated: 2024/10/26 11:11:20 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const	char *str)
{
	int	num;
	int	muns;
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	muns = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			muns = -1;
		i++;
	}
	num = 0;
	while (ft_isdigit(str[i]))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * muns);
}
