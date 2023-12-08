/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:07:17 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/12/08 17:10:47 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	n = '\n';
	int	i;

	i = 0;
	if(!s)
		return(NULL);
	while(s)
	{
		write(fd, s[i], 1);
		write(fd, &n, 1);
		i++;
	}
}
