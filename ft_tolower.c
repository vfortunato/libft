/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:01:40 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 04:16:56 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
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
    c='A'; //maiúsculo
    printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(c));
	printf("\n");
	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
    c='M'; //maiúsculo
    printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(c));
	printf("\n");
	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
    c='/'; // não maiúsculo
    printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(c));
	printf("\n");
	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
    c='f'; //não maiúsculo
    printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(c));

    return 0;
} */