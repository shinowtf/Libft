/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:24:42 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/20 15:22:24 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *pdst;
	const char *psrc;

	pdst = dst;
	psrc = src;
	if (src == NULL && dst == NULL)
		return (dst);
	if (dst > src)
	{
		pdst += n;
		psrc += n;
		while (n-- > 0)
		{
			*(--pdst) = *(--psrc);
		}
	}
	else
	{
		while (n-- > 0)
		{
			*(pdst++) = *(psrc++);
		}
	}
	return (dst);
}