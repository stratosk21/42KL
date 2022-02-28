/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:44:36 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/23 15:44:38 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	integer_result;
	int	minus_indicator;
	int	i;

	minus_indicator = 1;
	integer_result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		str++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			minus_indicator = -minus_indicator;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		integer_result = integer_result * 10 + (str[i] - '0');
		i++;
	}
	return (integer_result * minus_indicator);
}
