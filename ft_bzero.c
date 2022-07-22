/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:44:07 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/06/28 03:48:08 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n != 0)
	{
		*str++ = 0;
		n--;
	}
}

//test
// #include <stdio.h>
// #include <ctype.h>
// #include <stddef.h>
// #include <strings.h>
// #include <unistd.h>

// void    ft_putchar (char c)
// {
//     write (1, &c, 1);
// }

// void ft_bzero(void *s, size_t n);

// int main(void)
// {
//     int    i;

//     i = 0;

//     printf("**** TESTE 01 ****\n");
//     printf("-----------------------------------\n");
//     printf("Valor String == BIAaA\nValor zerado == 3\n");
//     char ptr[] = "BIAaA";
//     while (i < 5)
//     {
//         ft_putchar(ptr[i++]);
//     }
//     printf("\n");
//     ft_bzero(&ptr, 3);
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr[i++]);
// 	}
//     char ptr1[] = "BIAaA";
//     printf("\n");
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr1[i++]);
//     }
//     bzero(&ptr1, 3);
//     printf("\n");
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr1[i++]);
//     }
//     printf("\n");
//     printf("-----------------------------------\n");
//    
//     printf("**** TESTE 02 ****\n");
//     printf("-----------------------------------\n");
//     printf("Valor string == BIAaA\nValor zerado == 6\n");
//     char ptr2[] = "BIAaA";
//     i = 0;
//     while (i < 6)
//     {
//         ft_putchar(ptr2[i++]);
//     }
//     printf("\n");
//     ft_bzero(&ptr2, 6);
//     i = 0;
//     while (i < 6)
//     {
//         ft_putchar(ptr2[i++]);
//     }
//     printf("\n");
//     char ptr3[] = "BIAaA";
//     i = 0;
//     while (i < 6)
//     {
//         ft_putchar(ptr3[i++]);
//     }
//     printf("\n");
//     bzero(&ptr3, 6);
//     i = 0;
//     while (i < 6)
//     {
//         ft_putchar(ptr3[i++]);
//     }
//     printf("\n");
//     printf("-----------------------------------\n");

//     printf("**** TESTE 03 ****\n");
//     printf("-----------------------------------\n");
//     printf("Valor string == BIAaA\nValor zerado == 0\n");
//     char ptr4[] = "BIAaA";
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr4[i++]);
//     }
//     printf("\n");
//     ft_bzero(&ptr4, 0);
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr4[i++]);
//     }
//     printf("\n");
//     char ptr5[] = "BIAaA";
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr5[i++]);
//     }
//     printf("\n");
//     bzero(&ptr5, 0);
//     i = 0;
//     while (i < 5)
//     {
//         ft_putchar(ptr5[i++]);
//     }
//     printf("\n");
//     printf("-----------------------------------\n");

//     return (0);
// }
