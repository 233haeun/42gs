/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:58:36 by haelee            #+#    #+#             */
/*   Updated: 2024/11/26 12:18:35 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	tmp = malloc(size * nmemb);
	if (tmp == NULL)
		return (NULL);
	ft_memset(tmp, 0, nmemb * size);
	return (tmp);
}
