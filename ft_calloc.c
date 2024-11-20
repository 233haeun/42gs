/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:58:36 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 17:00:04 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	tmp = malloc(size * nmemb);
	if (tmp == NULL)
		return (NULL);
	ft_memset(tmp, 0, nmemb * size);
	return (tmp);
}
