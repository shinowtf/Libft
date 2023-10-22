/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:52:20 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/23 00:09:54 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char *)s;

	while (n > 0) 
	{
		if (*p == (unsigned char *)c)
			return ((void*)p)
	}
	p++;
	n--;
	return (NULL);
}
