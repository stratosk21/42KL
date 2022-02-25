#include <unistd.h>

char ft_putstr(char *c)
{
	int i = 0;
	while(c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_putstr(argv[0]);

	//always include size in terms of char[x]
	//unless you have malloc
	char *a = mallo(sizeof(char * 6);
	
	char a[5] = "12345";
	int i = 0;
	while(a[i] != '\0')
	{
		a[i] = a[i] + 1;
		write(1, &a[i], 1);
		//++ address of argv
		i++;
	}
	a[i] = '\0';
	return (0);	
}
