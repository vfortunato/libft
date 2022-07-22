/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 04:40:44 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/06 03:56:52 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n > 0)
	{
		str = (unsigned char *) s;
		if (*str == (unsigned char) c)
			return (str);
		n--;
		s++;
	}
	return (NULL);
}
