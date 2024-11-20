/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:19:54 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 11:18:10 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (*(src + src_len))
		src_len++;
	while (*(src + i) && i < size - 1 && size != 0)
	{
		*(dst + i) = *(src + i);
		++i;
	}
	if (size > 0)
		*(dst + i) = '\0';
	return (src_len);
}
