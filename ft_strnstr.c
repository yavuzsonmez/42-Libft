/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:51:44 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/19 17:48:56 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		start = i;
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == 0)
				return ((char *)big + start);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
