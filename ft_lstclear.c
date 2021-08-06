/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:24:32 by ysonmez           #+#    #+#             */
/*   Updated: 2021/08/06 11:30:59 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*rm;

	tmp = *lst;
	while (tmp != NULL)
	{
		rm = tmp -> next;
		del(tmp -> content);
		ft_memfree((void *)tmp);
		tmp = rm;
	}
	*lst = NULL;
}
