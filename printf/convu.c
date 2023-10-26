/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:06:42 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/26 12:25:26 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

static int	size_count(unsigned int n)
{
	int	i;

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

char	*ft_usitoa(unsigned int n)
{
	char	*str;
	int		i;

	i = size_count(n);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (0);
	str = buff(str, i, n);
	return (str);
}

t_ull	ft_conv_u(unsigned int num)
{
	char			*str;
	unsigned int	j;

	j = 0;
	str = ft_usitoa(num);
	if (!str)
		return (0);
	while (str[j])
	{
		putchar(str[j]);
		j++;
	}
	free(str);
	return (j);
}
