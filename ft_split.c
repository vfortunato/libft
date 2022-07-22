/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 04:52:39 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 02:52:06 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_writeword(char **str, char const *s, char c)
{
	size_t			len;
	unsigned int	start;
	size_t			i;

	len = 0;
	start = 0;
	i = 0;
	while (s[start + len] != '\0')
	{
		while (s[start + len] == c && s[start + len] != '\0')
			start++;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		if (len != 0)
		{
			str[i] = ft_substr(s, start, len);
			start += len;
			len = 0;
			i++;
		}
	}
	str[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c && i != 0 && s[i - 1] != c)
			j++;
		i++;
	}
	if (i != 0 && s[i - 1] != c && ft_strlen(s) > 0)
		j++;
	str = malloc((j + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	ft_writeword (str, s, c);
	return (str);
}
