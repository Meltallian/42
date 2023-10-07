#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;
    i = 0;

    while(s[i])
    {
        i++;
    }
    return(i);
}

char *ft_strdup(const char *src)
{
    char *dup;
    int i;
    i = 0;
    dup = (char*)malloc((ft_strlen(src)+1)*sizeof(char));

    if(!dup)
        return(NULL);
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}

/* int main(int ac, char **av)
{
    if(ac != 3)
        return(1);

    size_t nmemb;
    size_t size;
    nmemb = av[1];
    size = av[2];

    printf("Result: %d\n", ft_calloc(nmemb, size));
    return(0);
} */