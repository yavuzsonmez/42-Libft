/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfreeall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:56:02 by ysonmez           #+#    #+#             */
/*   Updated: 2021/10/13 18:32:08 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memfreeall(void ***ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return ;
	while (*ptr[i]  != NULL)
	{
		ft_memfree(ptr[i]);
		i++;
	}
	free(*ptr);
	*ptr = NULL;
}
