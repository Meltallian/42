#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *src, int c)
{
    int i;
    i = 0;

    while(src[i])
    {
        i++;
    }
    if(c == '\0')
        return(&src[i]);
    while(i >= 0)
    {
        if(src[i] == c)
            return(&src[i]);
        i--;
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