/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:03:54 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/12/08 16:46:49 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if(!(str = ft_strdup(s)))
		return(NULL);
	i = 0;
	while(str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return(str);
}
