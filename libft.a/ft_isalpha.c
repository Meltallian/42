#include <stdio.h>

int ft_isalpha(int c)
{
    if((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return (1);
    }
    else
        return (0);io
//
}

int main(int ac, char **av)
{
    int check;
    check = av[1][0];

    if(ac != 2)
        return(1);
    else
        printf("Result: %d\n", ft_isalpha(check));
    return(0);
}
