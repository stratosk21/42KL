/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:37:37 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/26 17:37:40 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		write(1, &array[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	result;

	counter = 0;
	while (s1[counter] == s2[counter]
		&& s1[counter] != '\0' && s2[counter] != '\0')
	{
		counter++;
	}
	result = s1[counter] - s2[counter];
	if (result > 0)
		return (1);
	else if (result == 0)
		return (0);
	else
		return (-1);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) == 1)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
