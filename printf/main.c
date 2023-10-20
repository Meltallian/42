#include "../libft/libft.h"
#include <stdarg.h>

void	ft_putchar(int c);
void	ft_conv_c(char c);
void	ft_conv_d(int d);
void	ft_conv_s(char *str);
void	ft_conv_i(int i);
void	ft_conv_x(unsigned int n);
void	ft_conv_X(unsigned int n);
void	ft_conv_p(void *ptr);
void	ft_conv_u(unsigned int num);

/* int	ft_printf(const	char*, ...)
{

} */

int	main ()
{
	int	i = 1000;
	unsigned int y = 4294967292;
	char c = 'a';
	char *ptr = "1000";
	char *src = "zug zug";
	printf("%d\n", i);
	ft_conv_d(i);
	printf("\n");
	ft_conv_c(c);
	printf("\n");
	ft_conv_s(src);
	printf("\n");
	ft_conv_x(i);
	printf("\n");
	ft_conv_X(i);
	printf("\n");
	ft_conv_p(ptr);
	printf("\n");
	ft_conv_u(y);
	return (0);
}