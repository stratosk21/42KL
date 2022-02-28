/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:26:42 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/26 20:26:45 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplicated_array;

	duplicated_array = malloc(sizeof(int) * (ft_strlen(src)));
	i = 0;
	while (src[i] != '\0')
	{
		duplicated_array[i] = src[i];
		i++;
	}
	return (duplicated_array);
}
