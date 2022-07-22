/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 03:07:21 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 02:54:16 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*s2;
	char	*p;

	s2 = ((char *)malloc(ft_strlen(s) * sizeof(char) + 1));
	if (!s2)
		return (NULL);
	p = s2;
	while (*s != '\0')
		*s2++ = *s++;
	*s2 = '\0';
	return (p);
}
