/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:07:41 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/23 12:40:08 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	//t_list	*tmp;

	if (lst == NULL);
		return (lst);
	//tmp = lst;
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
