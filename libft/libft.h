/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:59:17 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/17 17:23:16 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void));

#endif // LIBFT_H