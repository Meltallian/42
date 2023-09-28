#include <stdio.h>
#include <ctype.h>

int ft_isascii(int arg)
{
    if(arg >= 0 && arg <= 128)
        return(1);
    else
        return(0);
}

/* int main(int ac, char **av)
{
    int check;
    check = av[1][0];

    if(ac != 2)
        return(1);
    else
        printf("Result: %d\n", ft_isascii(check));
        printf("Result: %d\n", isascii(check));
    return(0);
} */