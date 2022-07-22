/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 02:41:48 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/12 03:36:13 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* test
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	result;

	printf("**** TESTE 01 ****\n");
	printf("-----------------------------------\n");
	printf("Aqui tem 22 caracteres\n");
	result = ft_strlen("Aqui tem 22 caracteres");
	printf ("ft_strlen: %d\n", result); 
	result = strlen("Aqui tem 22 caracteres");
	printf("strlen: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 02 ****\n");
	printf("-----------------------------------\n");
	printf("okg-()sh4$#&%%d <BreakLine>\n");
	result = ft_strlen("okg-()sh4$#&%%d \n");
	printf ("ft_strlen: %d\n", result); 
	result = strlen("okg-()sh4$#&%%d \n");
	printf("strlen: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
	printf("-----------------------------------\n");
	printf("NULL\n");
	result = ft_strlen("");
	printf ("ft_strlen: %d\n", result); 
	result = strlen("");
	printf("strlen: %d\n", result);
	printf("-----------------------------------\n");

	printf("**** TESTE 04 ****\n");
	printf("-----------------------------------\n");
	printf("SPACE\n");
	result = ft_strlen(" ");
	printf ("ft_strlen: %d\n", result); 
	result = strlen(" ");
	printf("strlen: %d\n", result);
	printf("-----------------------------------\n");
	
	return(0);
} */