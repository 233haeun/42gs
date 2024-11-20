/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:19:13 by haelee            #+#    #+#             */
/*   Updated: 2024/11/20 22:09:51 by haelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (result > (2147483647 / 10) ||
            (result == 2147483647 / 10 && (str[i] - '0') > (sign == 1 ? 7 : 8)))
		{
			return (sign == 1 ? -1 : 0);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
