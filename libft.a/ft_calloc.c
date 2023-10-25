/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:49:42 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/25 21:56:37 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	a;
	size_t	b;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	a = (nmemb * size);
	b = malloc(a);
	if (b == NULL)
		return(NULL);
	else
		ft_bzero(b, a);
	return(b);
}
