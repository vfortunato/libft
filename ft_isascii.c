/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:25:08 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 04:05:06 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* test
#include <stdio.h>
#include <ctype.h>


int	ft_isascii(int c);

int	main(void)
{
	int	result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("'236'\n");
	result = ft_isascii(236);
	printf ("ft_isascii: %d\n", result);
	result = isascii(236);
	printf("isascii: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
        printf("-----------------------------------\n");
        printf("t\n");
        result = ft_isascii('t');
        printf ("ft_isascii: %d\n", result);
        result = isascii('t');
        printf("isascii: %d\n", result);
        printf("-----------------------------------\n");

	 printf("**** TESTE 03 ****\n");
        printf("-----------------------------------\n");
        printf("NULL\n");
        result = ft_isascii(0);
        printf ("ft_isascii: %d\n", result);
        result = isascii(0);
        printf("isascii: %d\n", result);
        printf("-----------------------------------\n");

	 printf("**** TESTE 04 ****\n");
        printf("-----------------------------------\n");
        printf("ZERO\n");
        result = ft_isascii('0');
        printf ("ft_isascii: %d\n", result);
        result = isascii('0');
        printf("isascii: %d\n", result);
        printf("-----------------------------------\n");

	 printf("**** TESTE 05 ****\n");
        printf("-----------------------------------\n");
        printf("SPACE\n");
        result = ft_isascii(' ');
        printf ("ft_isascii: %d\n", result);
        result = isascii(' ');
        printf("isascii: %d\n", result);
        printf("-----------------------------------\n");

		printf("**** TESTE 06 ****\n");
        printf("-----------------------------------\n");
        printf("DEL\n");
        result = ft_isascii(127);
        printf ("ft_isascii: %d\n", result);
        result = isascii(127);
        printf("isascii: %d\n", result);
        printf("-----------------------------------\n");
} */