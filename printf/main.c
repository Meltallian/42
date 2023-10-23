/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:51:35 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/23 17:26:11 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>

void	ft_putchar(int c);
void	ft_conv_c(char c);
void	ft_conv_d(int d);
void	ft_conv_s(char *str);
void	ft_conv_i(int i);
void	ft_conv_x(unsigned int n);
void	ft_conv_capx(unsigned int n);
void	ft_conv_p(void *ptr);
void	ft_conv_u(unsigned int num);
void	ft_conv_percent(int c);

void	ft_format(va_list va, char *format, size_t	*i)
{
	if (*format == 'd' || *format == 'i')
		ft_conv_d(va_arg(va, int));
	else if (*format == 'c')
		ft_conv_c(va_arg(va, int));
	else if (*format == 's')
		ft_conv_s(va_arg(va, char *));
	else if (*format == 'p')
		ft_conv_p(va_arg(va, void *));
	else if (*format == 'u')
		ft_conv_u(va_arg(va, unsigned int));
	else if (*format == 'x')
		ft_conv_x(va_arg(va, unsigned int));
	else if (*format == 'X')
		ft_conv_capx(va_arg(va, unsigned int));
	else if (*format == '%')
		ft_putchar('%');
	(*i)++;
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	va;

	i = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_format(va, (char *)&str[i + 1], &i);
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(va);
	return (i);
}

int	main()
{
	char *ptr = "cinquante";
//	unsigned int	i = 156516510;
	ft_printf("Hello %s world", ptr);
	printf("\n");
	printf("Hello %s world", ptr);
	return (0);
}