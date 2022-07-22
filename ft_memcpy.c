/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:53:23 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/29 03:05:11 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (src == NULL && dest == NULL)
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}

/* 
//test
#include <stdio.h>
#include <string.h>

int main(){
    char *strs;
    char strd[30];
	
	printf("**** TESTE 01 ****\n");
    printf("-----------------------------------\n");
	strs = "";
    ft_memcpy(strd, strs, strlen(strs)+1);
	printf("strd: %s\nstrs: %s\n",strd,strs);
    memcpy(strd, strs, strlen(strs)+1);
    printf("strd: %s\nstrs: %s\n",strd,strs);
    printf("-----------------------------------\n");
	
	printf("**** TESTE 02 ****\n");
    printf("-----------------------------------\n");
    ft_memcpy(strd, "copy", strlen("copy")+1);
	printf("strd: %s\nstrs: %s\n", strd, "copy");
    memcpy(strd, "copy", strlen("copy")+1);
    printf("strd: %s\nstrs: %s\n", strd, "copy");
    printf("-----------------------------------\n");

	printf("**** TESTE 03 ****\n");
    printf("-----------------------------------\n");
	strs = "outro teste";
    ft_memcpy(strd, strs, strlen(strs)+1);
	printf("strd: %s\nstrs: %s\n", strd, strs);
    memcpy(strd, strs, strlen(strs)+1);
    printf("strd: %s\nstrs: %s\n", strd, strs);
    printf("-----------------------------------\n");

	printf("**** TESTE 04 ****\n");
    printf("-----------------------------------\n");
	strs = "fim";
    ft_memcpy(strd, strs, 4);
	printf("strd: %s\nstrs: %s\n", strd, strs);
    memcpy(strd, strs, 4);
    printf("strd: %s\nstrs: %s\n", strd, strs);
    printf("-----------------------------------\n");

    return 0;
} */