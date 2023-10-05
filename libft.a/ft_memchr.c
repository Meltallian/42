#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *src, int c, size_t n)
{
    size_t i;
    const unsigned char *s;
    s = src;
    i = 0;

    while(i < n)
    {
        if(s[i] == c)
            return(&s[i]);
        i++;
    }
    return(0);
}
/* 
int main(int ac, char **av)
{
    if(ac != 2)
        return(1);

    char *check;
    check = av[1];

    printf("Result: %d\n", ft_strlen(check));
    printf("Result: %ld\n", strlen(check));
    return(0);
} */