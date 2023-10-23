/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:51:29 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/23 17:19:33 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_conv_c(char c)
{
	ft_putchar(c);
}

void	ft_conv_d(int d)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(d);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_conv_s(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}

void	ft_conv_i(int i)
{
	char	*str;
	int		j;

	j = 0;
	str = ft_itoa(i);
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
}
