/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:16:32 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 17:07:51 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*re;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end -1] && ft_strchr(set, s1[end -1]))
	{
		if (end - 1 < 1)
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	re = (char *)malloc(sizeof (char) * (end - start + 1));
	if (re == NULL)
		return (NULL);
	ft_strlcpy(re, s1 + start, end - start +1);
	return (re);
}
