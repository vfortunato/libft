/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 01:17:07 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 04:12:17 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* test
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int	result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("T\n");
	result = ft_isprint('T');
	printf ("ft_isprint: %d\n", result);
	result = isprint('T');
	printf("isprint: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
	printf("t\n");
	result = ft_isprint('t');
	printf ("ft_isprint: %d\n", result);
	result = isprint('t');
	printf("isprint: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
	printf("NULL\n");
	result = ft_isprint(0);
	printf ("ft_isprint: %d\n", result);
	result = isprint(0);
	printf("isprint: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
	printf("ZERO\n");
	result = ft_isprint('0');
	printf ("ft_isprint: %d\n", result);
	result = isprint('0');
	printf("isprint: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 05 ****\n");
	printf("-----------------------------------\n");
	printf("SPACE\n");
	result = ft_isprint(' ');
	printf ("ft_isprint: %d\n", result);
	result = isprint(' ');
	printf("isprint: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 06 ****\n");
	printf("-----------------------------------\n");
	printf("DEL\n");
	result = ft_isprint(127);
	printf ("ft_isprint: %d\n", result);
	result = isprint(127);
	printf("isprint: %d\n", result);
	printf("-----------------------------------\n");
}
 */