#include <stdio.h>
#include <string.h>

int ft_strlen(char *c)
{
    int i;
    i = 0;

    while(c[i] != '\0')
    {
        i++;
    }
    return(i);
}

/* int main(int ac, char **av)
{
    if(ac != 2)
        return(1);

    char *check;
    check = av[1];

    printf("Result: %d\n", ft_strlen(check));
    printf("Result: %ld\n", strlen(check));
    return(0);
} */