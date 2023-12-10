/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:03:01 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/17 21:04:18 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t n)
{
	char	*s;
	int		i;

	i = 0;
	s = ptr;
	while (n-- > 0)
	{
		s[i] = 0;
		i++;
	}
	return (ptr);
}
