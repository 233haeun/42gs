/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:23:53 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 21:00:41 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	fillnumber(char *result, int n, size_t len, size_t i)
{
	while (len-- > i)
	{
		if (n < 0)
		{
			result[len] = '0' + -(n % 10);
			n = n / 10;
		}
		else
		{
			result[len] = '0' + n % 10;
			n = n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_len(n);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		i = 1;
	}
	fillnumber(result, n, len, i);
	return (result);
}
