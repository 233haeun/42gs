/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:22:35 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 16:59:14 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*tmp;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	tmp = malloc(src_len + 1);
	if (tmp == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
