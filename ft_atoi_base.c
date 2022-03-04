int indexpos(char c, char *base);
int ft_strlen(char *s);
int	errorcheck(int i, char *base);
int stringvalid(char *str, char *base);

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	j;
	int	k;
	int l;

	i = 0;
	j = 1;
	k = 0;
	l = ft_strlen(base);
	if (errorcheck(l, base) == -1)
		return (-1);
	if (stringvalid(str, base) == -1)
		return (-1);
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] != 0)
	{
		k = k * l + indexpos(str[i], base);
		i++;
	}
	return (k * j);
}

int indexpos(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	return (i);
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

int	errorcheck(int i, char *base)
{
	int j = 0;
	int k = 0;
	int l = 0;
	if (i == 0 || i == 1)
		return (-1);
	while (base[l] != 0)
	{
		if (base[l] == '+' || base[l] == '-' || base[l] <= 32 || base[l] == 127)
			return (-1);
		l++;
	}
	while (base[j] != 0)
	{
		k = j + 1;
		while (k < i)
		{
			if (base[j] == base[k])
				return (-1);
			k++;
		}
		j++;

	}
	return (0);
}

int stringvalid(char *str, char *base)
{
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != base[j])
		{
			if (base[j] == '\0' || j > ft_strlen(base))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}