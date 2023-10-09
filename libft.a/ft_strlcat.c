/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:12:59 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/09 15:14:17 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;
	size_t		destlen;
	size_t		srclen;

	d = dest;
	destlen = 0;
	srclen = 0;
	i = 0;
	s = src;
	while (d[destlen] && destlen < n)
	{
		destlen++;
	}
	while (destlen + i < n && s[i] != '\0')
	{
		d[destlen + i] = s[i];
		i++;
	}
	d[destlen + i] = '\0';
	if (n < destlen + i)
		return (n);
	return (destlen + i);
}
/*
int main(int ac, char **av)
{
	if(ac != 3)
		return(1);

	const char *src;
	char *dest;
	src = av[1];
	dest = av[2];

	printf("Result: %ld\n", ft_strlcat(dest, src, 10));
	 printf("Result: %d\n", strlcat(dest, src, 50));
	return(0);
}
*/