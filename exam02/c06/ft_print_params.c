#include <unistd.h>

int main(int argc, char **argv)
{
	//argv[0] == program name (./a.out || gcc *.c -Werror -Wall -Wextra -o rush-01)
	//./a.out, rush-01
	//argv[>0]
	//argv[1]
	//argv[1], argv[2], argv[3]
	//./a.out "4 3 1 2 1 2 2 2" "123" "234"
	int i = 1;
	int j = 0;
	while(i != argc)
	{
		while(**argv != '\0')
		{
			write(1, &**argv, 1);
			**argv++;
		}
		i++;
	}
	//argv[i] = '\0';
	return (0);

}
