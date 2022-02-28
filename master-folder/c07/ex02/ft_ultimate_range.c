/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:20:50 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/26 22:20:51 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array_of_ints;
	int	returned_range;
	int	i;

	i = 0;
	returned_range = max - min;
	array_of_ints = malloc(returned_range * sizeof range[0]);
	*range = array_of_ints;
	if (min >= max)
	{
		*range = NULL;
		returned_range = 0;
		return (returned_range);
	}
	while (min <= returned_range)
	{
		array_of_ints[i] = min;
		i++;
		min++;
	}
	if (sizeof(range) < 1)
		return (-1);
	return (sizeof(range));
}
