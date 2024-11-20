/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:28:03 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 18:16:05 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (*(src + i) && dst_len + i + 1 < size)
	{
		*(dst + dst_len + i) = *(src + i);
		++i;
	}
	*(dst + dst_len + i) = '\0';
	if (size <= dst_len)
		return (src_len + size);
	else
		return (src_len + dst_len);
}
