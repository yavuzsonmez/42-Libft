/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yavuzsonmez <yavuzsonmez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:24:48 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/24 11:34:47 by yavuzsonmez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	size_t	i;
	size_t	j;

	i = ft_lstsize(lst);
	j = 0;
	(void)del;
	new = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!new || !lst)
		return (NULL);
	while (j + 1 < i)
	{
		new[j].content = f(lst -> content);
		new[j].next = &new[j + 1];
		lst = lst -> next;
		j++;
	}
	new[j].content = f(lst -> content);
	new[j].next = NULL;
	return (new);
}
