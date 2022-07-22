/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:27:41 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 04:17:52 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/* test
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
	
	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
    c='a'; //minúsculo
    printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper: %c\n", toupper(c));
	printf("\n");
	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
    c='m'; //minúsculo
    printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper: %c\n", toupper(c));
	printf("\n");
	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
    c='/'; // não minúsculo
    printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper: %c\n", toupper(c));
	printf("\n");
	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
    c='F'; //não minúsculo
    printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper: %c\n", toupper(c));

    return 0;
} */