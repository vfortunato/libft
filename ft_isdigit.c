/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:00:32 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 04:05:27 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* test
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("T\n");
	result = ft_isdigit('T');
	printf ("ft_isdigit: %d\n", result);
	result = isdigit('T');
	printf("isdigit: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
        printf("-----------------------------------\n");
        printf("t\n");
        result = ft_isdigit('t');
        printf ("ft_isdigit: %d\n", result);
        result = isdigit('t');
        printf("isdigit: %d\n", result);
        printf("-----------------------------------\n");

	 printf("**** TESTE 03 ****\n");
        printf("-----------------------------------\n");
        printf("NULL\n");
        result = ft_isdigit(0);
        printf ("ft_isdigit: %d\n", result);
        result = isdigit(0);
        printf("isdigit: %d\n", result);
        printf("-----------------------------------\n");

	 printf("**** TESTE 04 ****\n");
        printf("-----------------------------------\n");
        printf("ZERO\n");
        result = ft_isdigit('0');
        printf ("ft_isdigit: %d\n", result);
        result = isdigit('0');
        printf("isdigit: %d\n", result);
        printf("-----------------------------------\n");

	 printf("**** TESTE 05 ****\n");
        printf("-----------------------------------\n");
        printf("SPACE\n");
        result = ft_isdigit(' ');
        printf ("ft_isdigit: %d\n", result);
        result = isdigit(' ');
        printf("isdigit: %d\n", result);
        printf("-----------------------------------\n");
} */