/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:26:35 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/26 16:26:37 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_putstr(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		write(1, &array[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (array);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
