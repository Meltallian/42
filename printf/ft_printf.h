/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:59:17 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/18 09:47:17 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_atoi(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
char	*ft_usitoa(unsigned int n);
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

#endif // FT_PRINTF_H