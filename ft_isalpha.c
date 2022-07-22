/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:00:20 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 04:00:40 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* test
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	main(void)
{
	int	result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("T: \n");
	result = ft_isalpha('T');
	printf ("ft_isalpha: %d\n", result);
	result = isalpha('T');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
	printf("t: \n");
	result = ft_isalpha('t');
	printf ("ft_isalpha: %d\n", result);
	result = isalpha('t');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
	printf("NULL: \n");
	result = ft_isalpha(0);
	printf ("ft_isalpha: %d\n", result);
	result = isalpha(0);
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
	printf("ZERO: \n");
	result = ft_isalpha('0');
	printf ("ft_isalpha: %d\n", result);
	result = isalpha('0');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 05 ****\n");
	printf("-----------------------------------\n");
	printf("SPACE: \n");
	result = ft_isalpha(' ');
	printf ("ft_isalpha: %d\n", result);
	result = isalpha(' ');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 06 ****\n");
	printf("-----------------------------------\n");
	printf("{: \n");
	result = ft_isalpha('{');
	printf ("ft_isalpha: %d\n", result);
	result = isalpha(' ');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 07 ****\n");
	printf("-----------------------------------\n");
	printf("-42: \n");
	result = ft_isalpha(-42);
	printf ("ft_isalpha: %d\n", result);
	result = isalpha(' ');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 08 ****\n");
	printf("-----------------------------------\n");
	printf("300: \n");
	result = ft_isalpha(300);
	printf ("ft_isalpha: %d\n", result);
	result = isalpha(' ');
	printf("isalpha: %d\n", result);
	printf("-----------------------------------\n");
} */