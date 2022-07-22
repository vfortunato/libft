/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:31:13 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 04:09:25 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (len > (ft_strlen(s) - start))
	{
		len = ft_strlen(s) - start;
	}
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = (char *)malloc(len * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
