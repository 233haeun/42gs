/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:17:06 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 12:48:59 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ss[i] = c;
		i++;
	}
	return ((void *)ss);
}
