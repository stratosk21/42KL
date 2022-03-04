#include <unistd.h>

int		ft_strlen(char *s);
void	ft_putchar(char c);
void	ft_putnbr_base(int nb, char *base);
int	errorcheck(int i, char *base, int j, int k);

int	main(void)
{
	ft_putnbr_base(123456789, "abcdefg");
	write(1, "\n", 1);
	ft_putnbr_base(-123456789, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(123456789, "01");
	write(1, "\n", 1);
	ft_putnbr_base(123456789, "012+3");
	write(1, "\n", 1);
	ft_putnbr_base(123456789, "012-3");
	write(1, "\n", 1);
	ft_putnbr_base(123456789, "");
	write(1, "\n", 1);
	ft_putnbr_base(123456789, "0");
}

void	ft_putnbr_base(int nb, char *base)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(base);
	j = 0;
	k = 0;
	if (errorcheck(i, base, j, k) == -1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= i)
	{
		ft_putnbr_base(nb / i, base);
		nb = nb % i;
	}
	if (nb < i)
		ft_putchar(base[nb]);
}

int	errorcheck(int i, char *base, int j, int k)
{
	if (i == 0 || i == 1)
		return (-1);
	while (base[j] != 0)
	{
		k = j + 1;
		while (k < i)
		{
			if (base[j] == base[k] || base[k] == '+' || base[k] == '-')
				return (-1);
			k++;
		}
		j++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
