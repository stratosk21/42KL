#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	char *function_created_array;
	int i;

	i = 0;
	while(src[i] != 0)
		i++;
	function_created_array = malloc(sizeof(char) * (i + 1));
	i = 0;
	while(src[i] != 0)
	{
		function_created_array[i] = src[i];
		i++;
	}
	function_created_array[i] = '\0';
	return (function_created_array);
}

int main()
{
	printf("%s", ft_strdup("I am lol zz"));
	return (0);
}
