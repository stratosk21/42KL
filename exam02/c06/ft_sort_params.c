#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char *av[])
{
    int i;
    int j;
    char *temp;

    i = 1;
    j = 0;
    while (i < ac + 1)
    {
        j = i + 1;
        while (j < ac)
        {
            if (strcmp(av[i], av[j]) > 0)
            {
                temp = av[i];
                av[i] = av[j];
                av[j] = temp;
            }
            j++;
        }
        i++;
    }
    printf("%s , %s , %s\n", av[1], av[2], av[3]);
}
