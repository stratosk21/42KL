/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:36:22 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/26 20:36:24 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*return_array;

	i = 0;
	range = max - min;
	return_array = malloc(sizeof(int) * range);
	if (min >= max)
	{
		return_array = NULL;
		return (return_array);
	}
	while (min <= range)
	{
		return_array[i] = min;
		i++;
		min++;
	}
	return (return_array);
}
