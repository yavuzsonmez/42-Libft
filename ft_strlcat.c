/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:51:29 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/25 12:04:20 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	len;

	i = ft_strlen(dst);
	x = 0;
	if (!dst)
		return (0);
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	else
		len = ft_strlen(dst) + ft_strlen(src);
	while (src[x] && i < size - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	if (i < size)
		dst[i] = 0;
	return (len);
}
