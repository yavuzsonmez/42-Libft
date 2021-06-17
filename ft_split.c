/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:56:21 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/17 17:33:19 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:34:24 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/17 14:35:58 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stddef.h>

void	*malloc(size_t size);

static size_t	get_tccount(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	setlen;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	while (j < setlen)
	{
		while (i < s1len)
		{
			i++;
		}
		j++;
	}
}

static size_t	str_count(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	while (j < setlen)
	{
		while (i < s1len)
		{
			if(s1[i] == set[i])
			i++;
		}
		j++;
	}
	return(count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	ts;

	i = 0;

	ts = (char*)malloc(sizeof());
	if(ts == NULL)
		return (NULL);
}

*/
