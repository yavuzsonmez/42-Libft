/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:57:37 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/21 10:36:17 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*ft_counter(char const *s, char const c, size_t *count)
{
	size_t	i;
	size_t	arrc;
	size_t	strc;

	i = ft_strlen(s) - 1;
	while(i > 0)
	{
		while(s[i] != c)
		{
			strc++;
			i--;
		}
		arrc++;
	}
	count[0] = arrc;
	count[1] = strc;
	count[2] = NULL;
	return (count);
}


char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	*count;
	char	*arr;

	i = 0;
	count = (size_t *)malloc(sizeof(size_t) * 3);
	ft_counter(s, c, count);
	arr = (char **)malloc(size(char *) * count[0]);
	arr[i] = NULL;
	free(count);
	return (arr);
}
