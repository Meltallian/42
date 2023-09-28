#include <stdio.h>
#include <ctype.h>

int ft_isprint(int arg)
{
    if(arg >= 20 && arg <= 126)
        return(1);
    else
        return(0);
}

int main(int ac, char **av)
{
    int check;
    check = av[1][0];

    if(ac != 2)
        return(1);
    else
        printf("Result: %d\n", ft_isprint(check));
        printf("Result: %d\n", isprint(check));
    return(0);
}