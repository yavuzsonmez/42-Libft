/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:00:12 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/23 11:49:29 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
