/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:24:48 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/23 15:53:39 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	**adnl;

	if (lst != NULL)
	{
		new = (t_list *)malloc(sizeof(t_list *));
		new -> content = f(lst -> content);
		new -> next =
		lst = lst -> next;
		adnl = new;
		while(lst -> next != NULL)
		{
			new = (t_list *)malloc(sizeof(t_list *));
			new -> content = f(lst -> content);
			new -> next =
			lst = lst -> next;
		}
		del(new -> content);
		free(new);
	}
}


*/
