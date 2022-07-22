/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:31:07 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 04:01:52 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	ls;

	i = 0;
	ls = strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, ls) == 0) && (i + ls <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
