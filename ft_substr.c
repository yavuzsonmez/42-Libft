/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:40:11 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/16 18:28:45 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	ss = NULL;
	i = 0;
	if (ss == (char *)malloc(sizeof(char) * (len + 1)))
		return (NULL);
	while(s[start + i] && i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = 0;
	return (ss);
}

/*
#include <stdio.h>

int main()
{

	printf("%s", ft_substr("Hello", 2, 3));
	return 0;
}
*/
