/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:10:19 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 03:57:19 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_assign(char *d, const char *s, size_t n)
{
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (s);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = size;
	if (!src || !dst)
		return (0);
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	s = ft_assign(d, s, n);
	return (dlen + (s - src));
}
