/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:59:17 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/13 15:47:13 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int			ft_atoi(const char *str);
void		ft_bzero(void *ptr, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
int			ft_isalnum(int arg);
int			ft_isalpha(int c);
int			ft_isascii(int arg);
int			ft_isdigit(int arg);
int			ft_isprint(int arg);
void		*ft_memchr(const void *src, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *ptr, int c, size_t n);
char		*ft_strchr(const char *src, int c);
char		*ft_strdup(const char *src);
char		*ft_strjoin(const char *s, const char *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t n);
size_t		ft_strlen(const char *c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *src, int c);
char		*ft_strrchr(const char *src, int c);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);
const char	*ft_strnstr(const char *big, const char *little, size_t len);
char		**ft_split(const char *s, const char c);
char		*ft_itoa(int n);

#endif // LIBFT_H