/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:52:59 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/16 11:47:05 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *m;
	t_list *first;
	t_list *nxt;

	m = f(lst);
	first = ft_lstnew(m->content, m->content_size);
	while (m != NULL)
	{
		first = m;
		nxt = m->next;
		f(m);
		m = nxt;
	}
	lst = NULL;
	return (m);
}
