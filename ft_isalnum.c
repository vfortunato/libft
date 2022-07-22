/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:04:00 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 03:58:48 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

/* test
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("T");
	result = ft_isalnum('T');
	printf ("ft_isalnum: %d\n", result);
	result = isalnum('T');
	printf("isalnum: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
	printf("t");
	result = ft_isalnum('t');
	printf ("ft_isalnum: %d\n", result);
	result = isalnum('t');
	printf("isalnum: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
	printf("NULL");
	result = ft_isalnum(0);
	printf ("ft_isalnum: %d\n", result);
	result = isalnum(0);
	printf("isalnum: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
	printf("ZERO");
	result = ft_isalnum('0');
	printf ("ft_isalnum: %d\n", result);
	result = isalnum('0');
	printf("isalnum: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 05 ****\n");
	printf("-----------------------------------\n");
	printf("SPACE");
	result = ft_isalnum(' ');
	printf ("ft_isalnum: %d\n", result);
	result = isalnum(' ');
	printf("isalnum: %d\n", result);
	printf("-----------------------------------\n");

	return (0);
}
 */