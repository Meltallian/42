#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const char *s = src;
    char *d = dest;
    char temp[n];
    int i;
    i = 0;

    if(n == 0 || d == s)
        return(dest);
    while(i < n)
    {
        temp[i] = s[i];
        i++;
    }
    i = 0;

    while(i < n)
    {
        d[i] = temp[i];
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