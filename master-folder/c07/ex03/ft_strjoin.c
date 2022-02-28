/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:39:01 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/27 16:39:03 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin_returned_string;
	int		j;

	j = 0;
	strjoin_returned_string = malloc(sizeof(1));
	strjoin_returned_string[0] = '\0';

	if (size == 0)
		return (strjoin_returned_string);
	while (size > 0)
	{
		//Together		[0]
		//super idol	[1]
		//woww			[2]
		strjoin_returned_string = ft_strcat(strjoin_returned_string, strs[j]);
		if (size > 1)
			strjoin_returned_string = ft_strcat(strjoin_returned_string, sep);
		size--;
		j++;
	}
	return (strjoin_returned_string);
}

char	*ft_strcat(char *dest, char *src)
{
	int h;
	int	i;
	int	j;
	char *returned_string;
	int rs_counter;

	h = 0;
	i = 0;
	j = 0;
	rs_counter = 0;

	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	returned_string = malloc(sizeof(char) * (i + j + 1));
	j = 0;
	while (dest[j] != 0)
	{
		returned_string[rs_counter] = dest[j];
		rs_counter++;
		j++;
	}
	i = 0;
	while (src[i] != 0)
	{
		returned_string[rs_counter] = src[i];
		rs_counter++;
		i++;
	}
	returned_string[rs_counter] = '\0';
	free(dest);
	return (returned_string);
}

int	main(void)
{
	//Together-super idol-woww
	char	*strs[] = {"Together", "super idol", "woww", "test"};
	char	sep[] = {"-"};

	char	*test;
	test = ft_strjoin(4, strs, sep);

	printf("%s", test);

	free(test);
	//system("leaks a.out");
	return (0);
}