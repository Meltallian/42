#include <unistd.h>

int ft_isalpha(int c)
{
    char a;
    a = c - 0;

    if(a > 64 && a < 91 || a > 96 && a < 123)
    {
        return (1);
    }
    else
        return (0);
}
int main(int ac, char av)
{
    if(ac != 2)
        return(1);
    else
        ft_isalpha(av);
    return(0);
}