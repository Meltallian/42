#include "../libft/libft.h"
#include <stdarg.h>

void	ft_putchar(int c);

void	ft_conv_x(unsigned int n)
{
	char	hexa[16];

	ft_memcpy(hexa, (char[16]){'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'}, 16);
	if (n == 0)
	{
		ft_putchar(hexa[0]);
		return ;
	}
	if (n > 0)
	{
		ft_conv_x(n / 16);
		ft_putchar(hexa[n % 16]);
	}
}

void	ft_conv_X(unsigned int n)
{
	char	hexa[16];

	ft_memcpy(hexa, (char[16]){'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}, 16);
	if (n == 0)
	{
		ft_putchar(hexa[0]);
		return ;
	}
	if (n > 0)
	{
		ft_conv_x(n / 16);
		ft_putchar(hexa[n % 16]);
	}
}

void	ft_conv_p(void *ptr)
{
	int		n;
	char	hexa[16];

	n = ft_atoi(ptr);
/* 	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	} */
	ft_memcpy(hexa, (char[16]){'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}, 16);
	if (n == 0)
	{
		ft_putchar(hexa[0]);
		return ;
	}
	if (n > 0)
	{
		ft_conv_x(n / 16);
		ft_putchar(hexa[n % 16]);
	}
}
