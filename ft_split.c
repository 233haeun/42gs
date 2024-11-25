/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:16:33 by haelee            #+#    #+#             */
/*   Updated: 2024/11/21 19:45:49 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*worddup(char const *s, size_t len)
{
	char	*sp_str;

	sp_str = (char *) malloc(sizeof(char) * (len + 1));
	if (!sp_str)
		return (NULL);
	ft_memcpy(sp_str, s, len);
	sp_str[len] = '\0';
	return (sp_str);
}

char	**freeall(char **list)
{
	size_t	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

size_t	wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			listsize++;
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	i;
	size_t	j;
	size_t	save;

	i = 0;
	j = 0;
	strlist = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!s || !strlist)
		return (NULL);
	while (i < wordcount(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		save = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		strlist[i] = worddup(s + save, j - save);
		if (strlist[i] == NULL)
			return (freeall(strlist));
		i++;
	}
	strlist[i] = NULL;
	return (strlist);
}
