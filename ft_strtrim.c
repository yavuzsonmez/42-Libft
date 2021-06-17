/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:34:24 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/17 15:20:11 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stddef.h>
#include "libft.h"
#include <stdio.h>

void	*malloc(size_t size);

size_t	ft_strlen(const char *s);

static size_t	ccount(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	setlen;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	while (i < s1len)
	{
		while (j < setlen)
		{
			if (s1[i] == set[j])
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;
	char	*ts;


	i = 0;
	count = ccount(s1, set) + 1;
	ts = NULL;
	ts = (char*)malloc(sizeof(char) * count);
	if(ts == NULL)
		return (NULL);

	ts[i] = 0;
	return (ts);
}

int main(void)
{
	printf("count : %zu\n", ccount("bon,jour,,/", ",/"));
	return (0);
}


*/
