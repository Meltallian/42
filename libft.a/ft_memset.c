/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:16:59 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/09 15:17:37 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;
	int		i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
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