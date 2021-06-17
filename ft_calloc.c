/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:13:53 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/17 17:25:37 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*malloc(size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = malloc(size * nmemb);
	if (!(arr))
		return (NULL);
	ft_memset(arr, 0, size * nmemb);
	return (arr);
}
