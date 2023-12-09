/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:11:46 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/24 00:18:20 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	num;

	c = 0;
	sign = 1;
	num = 0;
	while (str[c] == ' ' || (str[c] >= '\t' && str[c] <= '\r'))
	{
		c++;
	}
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
		{
			sign *= -1;
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		num = (str[c] - '0') + (num * 10);
		c++;
	}
	return (num * sign);
}
