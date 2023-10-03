#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    const char *s = src;
    char *d = dest;
    size_t i;
    i = 0;

    while(i < (n - 1) && s[i] != '\0')
    {
        d[i] = s[i];
        i++;
    }
    if(n != 0)
        d[i] = '\0';
    while(s[i])
        i++;
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