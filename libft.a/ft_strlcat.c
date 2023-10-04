#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    const char *s = src;
    char *d = dest;
    size_t i;
    size_t destlen;
    size_t srclen;
    destlen = 0;
    srclen = 0;
    i = 0;

    while(d[destlen] && destlen < n)
    {
        destlen++;
    }
    while(destlen + i < n && s[i] != '\0')
    {
        d[destlen + i] = s[i];
        i++;
    }
    d[destlen + i] = '\0';
    if(n < destlen + i)
        return(n);
    return (destlen + i);
}

int main(int ac, char **av)
{
    if(ac != 3)
        return(1);

    const char *src;
    char *dest;
    src = av[1];
    dest = av[2];

    printf("Result: %ld\n", ft_strlcat(dest, src, 10));
/*     printf("Result: %d\n", strlcat(dest, src, 50)); */
    return(0);
}