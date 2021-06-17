/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:13:53 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/17 15:50:44 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*malloc(size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	//arr = NULL;
	//if (nmemb == 0 || size == 0)
	//	return (NULL);
	arr = malloc(size * nmemb);
	if (!(arr))
		return (NULL);
	arr = ft_memset(arr, 0, size);
	return (arr);
}
