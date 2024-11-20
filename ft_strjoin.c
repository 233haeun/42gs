/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:21:46 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 17:06:35 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*re;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	re = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (re == NULL)
		return (NULL);
	ft_strlcpy(re, s1, len_s1 + 1);
	ft_strlcat(re + (len_s1), s2, len_s2 + 1);
	return (re);
}
