/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yavuzsonmez <yavuzsonmez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:24:48 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/23 23:31:07 by yavuzsonmez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	tmp = (t_list *)malloc(sizeof(t_list *));
	if (!tmp)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list *));
	if (!new)
		return (NULL);
	new -> content = f(new -> content);
	new -> next = lst -> next;
	tmp = new;
	del(new -> content);
	free(new);
	while (lst != NULL)
	{
		new = (t_list *)malloc(sizeof(t_list *));
		if (!new)
			return (NULL);
		new -> content = f(new -> content);
		new -> next = lst -> next;
		lst = lst -> next;
	}
	return (tmp);
}
