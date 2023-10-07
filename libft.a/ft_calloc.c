#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char *ptr;
    size_t i;
    i = 0;

    if(nmemb == 0 || size == 0)
        {
            nmemb = 1;
            size = 1;
        }    
    ptr = (char*)malloc(nmemb*size);

    if(!ptr)
        return (NULL);
    while(i < nmemb*size)
    {
        ptr[i] = 0;
        i++;
    }
    return(ptr);
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