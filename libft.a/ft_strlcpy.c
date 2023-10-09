/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:10:30 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/09 15:12:39 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	while (i < (n - 1) && s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	if (n != 0)
		d[i] = '\0';
	while (s[i])
		i++;
	return (i);
}

/* int main(int ac, char **av)
{
	if(ac != 2)
		return(1);

	char *check;
	check = av[1];

	printf("Result: %d\n", ft_strlen(check));
	printf("Result: %ld\n", strlen(check));
	return(0);
} */