/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:02:23 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/09 19:05:13 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (ft_strlen(s) < ((size_t)start + len))
		return (0);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	i = 0;
	while(i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int main(int ac, char **av)
{
	if(ac != 4)
		return(1);
	char *str;
	char *res;
	unsigned int start;
	size_t len;
	size_t i = 0;

	str = av[1];
	start = av[2][0];
	len = av[3][0];
	res = ft_substr(str, start, len);
	while(res[i])
	{
		printf("Result: %c\n", res[i]);
		i++;
	}
	return(0);
}