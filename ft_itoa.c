/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelipe- <vfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:00:12 by vfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 02:47:57 by vfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countnumber(int n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = isnegative(n);
	if (negative)
		n = -n;
	i = ft_countnumber(n) + negative;
	str = malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (negative)
		str[0] = '-';
	while (i-- > negative)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
