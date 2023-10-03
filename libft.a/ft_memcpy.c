#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    const char *str = src;
    char *str2 = dest;
    int i;
    i = 0;

    while(i < n)
    {
        str2[i] = str[i];
        i++;
    }
    return(dest);
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