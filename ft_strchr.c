/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:11:50 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/10 19:10:07 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (c > 127)
		c %= 256;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

/* test
#include <stdio.h>
#include <string.h>

int main () {
	char *str = "teste strchr";
	
	char *result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");	
	result = ft_strchr(str, 's');
	printf("Search letter '%c': %s\n", 's', result);
	result = strchr(str, 's');
	printf("Search letter '%c': %s\n", 's', result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");	
	result = ft_strchr(str, 'a');
	printf("Search letter '%c': %s\n", 'a', result);
	result = strchr(str, 'a');
	printf("Search letter '%c': %s\n", 'a', result);
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");	
	result = ft_strchr(str, '\0');
	printf("Search letter '%c': %s\n", '\0', result);
	result = strchr(str, '\0');
	printf("Search letter '%c': %s\n", '\0', result);
	printf("-----------------------------------\n");

	return(0);
} */