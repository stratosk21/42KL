#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"Together", "super idol", "woww"};
	char	sep[] = {"-"};
	printf("%s", ft_strjoin(2, strs, sep));
}