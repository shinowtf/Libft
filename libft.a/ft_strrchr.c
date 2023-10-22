/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:43:01 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/22 23:43:05 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int n;

	n = 0;
	while(s[n] != '\0')
		n++;
	s = s + n - 1;
	 while (*s != NULL)
	 {
		 if (*s == c)
			return ((char *) s);
		s--;
	 }
	return(NULL);
}
