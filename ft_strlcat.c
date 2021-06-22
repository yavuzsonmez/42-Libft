/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:51:29 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/22 15:45:12 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	x = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dst_len > size)
		return (dst_len);
	while (dst[i])
		i++;
	while (x < (size - dst_len - 1) && src[x])
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = 0;
	return (dst_len + src_len);
}
