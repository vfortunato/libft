/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:20:47 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/10 02:51:11 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 != *s2)
			return ((char)*s1 - (char)*s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main(void)
{
	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("Teste, Teste\n");
	printf("ft_strncmp: %d\n", ft_strncmp("Teste", "Teste", 5));
	printf("strncmp: %d\n", strncmp("Teste", "Teste", 5));
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
	printf("Teste, taste\n");
	printf("ft_strncmp: %d\n", ft_strncmp("Teste", "Taste", 3));
	printf("strncmp: %d\n", strncmp("Teste", "Taste", 3));
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
	printf("Teste, NULL\n");
	printf ("ft_strncmp: %d\n", ft_strncmp("Teste", "", 10));
	printf("strncmp: %d\n", strncmp("Teste", "", 10));
	printf("-----------------------------------\n");

	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
	printf("Teste, Te/n/t\n");
	printf ("ft_strncmp: %d\n", ft_strncmp("Teste", "Te\n\t", 1));
	printf("strncmp: %d\n", strncmp("Teste", "Te\n\t", 1));
	printf("-----------------------------------\n");

	printf("**** TESTE 05 ****\n");
	printf("-----------------------------------\n");
	printf("Tes te, 'space'\n");
	printf ("ft_strncmp: %d\n", ft_strncmp("Tes te", "  ", 10));
	printf("strncmp: %d\n", strncmp("Tes te", "  ", 10));
	printf("-----------------------------------\n");

	printf("**** TESTE 06 ****\n");
	printf("-----------------------------------\n");
	printf("Teste, Testa\n");
	printf("ft_strncmp: %d\n", ft_strncmp("Teste", "Testa", 5));
	printf("strncmp: %d\n", strncmp("Teste", "Testa", 5));
	printf("-----------------------------------\n");

	printf("**** TESTE 07 ****\n");
	printf("-----------------------------------\n");
	printf("Teste, Testa\n");
	printf("ft_strncmp: %d\n", ft_strncmp("Teste", "Testa", 3));
	printf("strncmp: %d\n", strncmp("Teste", "Testa", 3));
	printf("-----------------------------------\n");

	printf("**** TESTE 08 ****\n");
	printf("-----------------------------------\n");
	printf("Tes, Teste\n");
	printf("ft_strncmp: %d\n", ft_strncmp("Te", "Testa", 3));
	printf("strncmp: %d\n", strncmp("Te", "Testa", 3));
	printf("-----------------------------------\n");

	return (0);
} */