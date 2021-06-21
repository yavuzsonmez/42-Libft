/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:57:37 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/21 16:06:34 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>

static size_t	count_str(char const *s, char const c)
{
	size_t	i;
	size_t	str;

	i = 0;
	str = 0;
	while (s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		while(s[i] && s[i] != c)
			i++;
		if (s[i] == c)
			str++;
	}
	return (str);
}

//static size_t	count_char(char const *s, char const c)
//{
//	static size_t	i;
//}

static char	*newstr(char const *s, char c)
{
	static size_t	i;
	size_t			j;
	size_t			k;
	size_t			count;
	char			*str;

	i = 0;
	count = 0;
	k = 0;
	while (s[i] == c)
		i++;
	j = i;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	while (k < count)
	{
		str[k] = s[j];
		j++;
		k++;
	}
	str[k] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	c_str;
	char	**arr;

	i = 0;
	if (!s)
		return (NULL);
	c_str = count_str(s, c);
	arr = (char **)malloc(sizeof(char *) * (c_str + 1));
	if (!arr)
		return (NULL);
	while (i < c_str)
	{
		arr[i] = newstr(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

int main(void)
{
	int i = 0;
	char const c = 'd';
	char const *s;

	s = strdup("ddddBonjourddSalutd");
	char **arr = ft_split(s, c);

	while(arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return 0;
}
