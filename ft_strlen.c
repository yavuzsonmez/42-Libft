/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:09:09 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/16 15:12:59 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
