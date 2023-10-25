/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:22:46 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/25 18:25:37 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main() {
    printf("Testing %%:\n");
    printf("Expected: %%\n");
    ft_printf("Actual: %%");
    printf("\n\n");

	printf("Testing %%c:\n");
	char ch = 'A';
	printf("Expected: %c\n", ch);
	ft_printf("Actual: %c", ch);
	printf("\n\n");

    printf("Testing %%s:\n");
    char *str = "Hello World";
    printf("%s", str);
	printf("\n");
    ft_printf("%s", str);
    printf("\n\n");

    printf("Testing %%d:\n");
    int number = -1266345;
    printf("Expected: ");
	printf("\n%d", printf("%d", number));
	printf("\n");
    ft_printf("Actual: ", number);
	printf("\n%d", ft_printf("%d", number));
    printf("\n\n");
/*
    printf("Testing %%p:\n");
//	void *ptr = &number;
    printf("Expected: ");
	printf("\n%d", printf("%p", NULL));
	printf("\n");
    ft_printf("Actual: ");
	printf("\n%d", ft_printf("%p", NULL));
    printf("\n\n");

    printf("Testing %%x:\n");
    unsigned int hexa = 100000;
	printf("Expected: ");
	printf("\n%d", printf("%x", hexa));
	printf("\n");
    ft_printf("Actual: ");
	printf("\n%d", ft_printf("%x", hexa));
    printf("\n\n");

    printf("Testing %%X:\n");
	unsigned int heXa = 155155;
    printf("Expected: ");
	printf("\n%d", printf("%X", heXa));
	printf("\n");
    ft_printf("Actual: ");
	printf("\n%d", ft_printf("%X", heXa));
    printf("\n\n");
 */
    printf("Testing %%u:\n");
    unsigned int unumber = 12345;
    printf("Expected: %u\n", unumber);
    ft_printf("Actual: %u", number);
    printf("\n\n");
    return (0);
}