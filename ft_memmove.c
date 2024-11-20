/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:01:38 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 12:50:44 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buf_src;
	unsigned char	*buf_dest;
	size_t			i;

	i = 0;
	buf_src = (unsigned char *)src;
	buf_dest = (unsigned char *)dest;
	if (dest == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		if (src > dest)
			buf_dest[i] = buf_src[i];
		else
			buf_dest[n - 1 - i] = buf_src[n - 1 - i];
		i++;
	}
	return (buf_dest);
}
