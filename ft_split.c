/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:52:51 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 21:50:19 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	issep(char c, char sep)
{
	return (c == sep);
}

int	countwords(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!issep(str[i], sep) && (i == 0 || issep(str[i - 1], sep)))
			count++;
		i++;
	}
	return (count);
}

char    *makestr(const char *str, char sep)
{
    int     len;
	int		i;
    char    *new_str;

    len = 0;
	i = 0;
    while (str[len] && !issep(str[len], sep))
		len++;
    new_str = ((char *)malloc((len + 1) * sizeof(char)));
    if (new_str == 0)
		return (0);
    while (i < len)
    {
        new_str[i] = str[i];
        i++;
    }
    new_str[len] = '\0';
    return (new_str);
}

void	free_str_arr(char **str_arr, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		arr_i;
	int		i;
	int		word_num;

	if (!s)
		return (NULL);
	word_num = countwords(s, c);
	str_arr = (char **)malloc((word_num + 1) * sizeof(char *));
	arr_i = 0;
	i = 0;
	if (!str_arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && issep(s[i], c))
			++i;
		if (s[i] && !issep(s[i], c))
		{
			str_arr[arr_i] = makestr((s + i), c);
			if (!str_arr[arr_i])
			{
				free_str_arr(str_arr, arr_i);
				return (NULL);
			}
			arr_i++;
			while (s[i] && !issep(s[i], c))
				i++;
		}
	}
	str_arr[arr_i] = (NULL);
	return (str_arr);
}
