/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:49:42 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/12/10 15:29:08 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((size != 0 && count > UINT_MAX / size)
		|| (count != 0 && size > UINT_MAX / count))
	{
		return (0);
	}
	ptr = (void *)malloc(count * size);
	if (!ptr)
	{
		return (0);
	}
	else
	{
		ft_bzero(ptr, count * size);
	}
	return (ptr);
}
