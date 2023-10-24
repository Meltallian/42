/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usitoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:02:23 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/13 17:58:27 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_count(int n)
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

static char	*buff(char *str, int i, int n)
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
	char			*str;
	unsigned int	i;

	i = size_count(n);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (0);
	str = buff(str, i, n);
	return (str);
}
/*
int	main(void)
{
	unsigned int	n;

	n = 3147647;
	printf("%s", ft_usitoa(n));
	return (0);
}
 */