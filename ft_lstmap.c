/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:34:55 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/14 10:59:44 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	result = new;
	lst = lst->next;
	while (lst)
	{
		if (!new)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&result, del);
			break ;
		}
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
