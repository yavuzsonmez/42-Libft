/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:51:14 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/19 10:20:15 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*malloc(size_t size);

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ss)
		return (NULL);
	while (s[i])
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = 0;
	return (ss);
}
