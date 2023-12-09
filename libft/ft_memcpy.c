/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:09:36 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/17 22:10:37 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (0);
	if (n == 0)
		return (dest);
	while (n-- > 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}