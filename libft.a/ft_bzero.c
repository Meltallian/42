#include <stdio.h>
#include <string.h>

void ft_bzero(void *ptr, size_t n)
{
    char *str = ptr;
    int i;
    i = 0;

    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
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