/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:44:48 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/18 17:56:20 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
static size_t	check_overlap(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (src + i == dest)
			return (1);
		i++;
	}
	return (0);
}

*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if ((!(dest) && !(src)) || n == 0 )
		return (NULL);
	while ((i < n) && ((unsigned char *) src)[i] != c)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	if (((unsigned char *)dest)[i] == c)
		return ((unsigned char *)dest + (i+1));
	else
		return (NULL);
}
