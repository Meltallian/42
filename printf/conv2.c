/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:51:18 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/23 17:15:22 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c);

void	ft_conv_x(unsigned int n)
{
	char	hexa[16];

	ft_memcpy(hexa, (char [16]){'0', '1', '2', '3', '4', '5', '6',
		'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'}, 16);
	if (n > 0)
	{
		ft_conv_x(n / 16);
		ft_putchar(hexa[n % 16]);
	}
}

void	ft_conv_capx(unsigned int n)
{
	char	hexacap[16];

	ft_memcpy(hexacap, (char [16]){'0', '1', '2', '3', '4', '5', '6',
		'7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}, 16);
	if (n > 0)
	{
		ft_conv_capx(n / 16);
		ft_putchar(hexacap[n % 16]);
	}
}

void	ft_conv_p(void *ptr)
{
	__uintmax_t	n;
	char		hexa[16];

	write(1, "0x", 2);
	n = (__uintmax_t)ptr;
	ft_memcpy(hexa, (char [16]){'0', '1', '2', '3', '4', '5', '6',
		'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'}, 16);
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

void	ft_conv_u(unsigned int num)
{
	char			*str;
	unsigned int	j;

	j = 0;
	str = ft_usitoa(num);
	if (!str)
		return ;
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
}

void	ft_conv_percent(int c)
{
	ft_putchar(c);
}
