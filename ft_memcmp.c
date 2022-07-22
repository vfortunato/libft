/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:23:07 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/06 03:57:59 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*s;
	size_t			i;

	p = (unsigned char *) s1;
	s = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != s[i])
			return ((int)(p[i] - s[i]));
		if (n == 0)
			return ((int) n);
		i++;
	}
	return (0);
}
