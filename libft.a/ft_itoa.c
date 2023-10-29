/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:39:23 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/29 18:03:31 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (str == NULL)
		return(NULL);
	if (str == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else (n >= 0 && n < 10)
	{
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	else if (n >= 10)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return(str);
}
