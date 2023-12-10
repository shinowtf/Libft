/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:21:40 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/28 16:24:47 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_trim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	ptr_trim = malloc((len + 1) * sizeof(char));
	if (!ptr_trim)
		return (NULL);
	ft_memcpy(ptr_trim, s1, len);
	ptr_trim[len] = '\0';
	return (ptr_trim);
}
