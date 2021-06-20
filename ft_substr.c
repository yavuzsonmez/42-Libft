/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:40:11 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/19 11:27:36 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	count;
	char	*ss;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s + start) >= len)
		count = len;
	else
		count = ft_strlen(s + start);
	ss = (char *)malloc(sizeof(char) * (count + 1));
	if (!ss)
		return (NULL);
	while (i < count)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = 0;
	return (ss);
}
