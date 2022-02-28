/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:15:34 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/26 16:00:19 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
