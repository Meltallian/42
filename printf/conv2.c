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

static size_t	size_count(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*buff(char *str, int i, unsigned int n)
{

	while (--i >= 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char			*str;
	unsigned int	i;

	i = size_count(n);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (0);
	str = buff(str, i, n);
	return (str);
}

void	ft_conv_u(unsigned int num)
{
	char			*str;
	unsigned int	j;

	j = 0;
	str = ft_itoa_unsigned(num);
	if (!str)
		return ;
	while(str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	free(str);
}
