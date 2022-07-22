/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 04:47:12 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/09 06:37:13 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* test
#include <stdio.h>
#include <string.h>

int main () {
	char *str = "teste strrchr";
	
	char *result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");	
	result = ft_strrchr(str, 's');
	printf("Search letter '%c': %s\n", 's', result);
	result = strrchr(str, 's');
	printf("Search letter '%c': %s\n", 's', result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");	
	result = ft_strrchr(str, 'h');
	printf("Search letter '%c': %s\n", 'h', result);
	result = strrchr(str, 'h');
	printf("Search letter '%c': %s\n", 'h', result);
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");	
	result = ft_strrchr(str, '\0');
	printf("Search letter '%c': %s\n", '\0', result);
	result = strrchr(str, '\0');
	printf("Search letter '%c': %s\n", '\0', result);
	printf("-----------------------------------\n");

	return(0);
} */