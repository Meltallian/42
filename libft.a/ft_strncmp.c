#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    i = 0;

    while(i < n)
    {
        if(s1[i] == '\0')
            return(s1[i] - s2[i]);
        if(s2[i] == '\0')
            return(s1[i] - s2[i]);
        if(s1[i] > s2[i] || s2[i] > s1[i])
            return(s1[i] - s2[i]);
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