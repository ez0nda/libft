/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:14:22 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/15 20:37:07 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tmp;
	t_list *nxt;

	tmp = lst;
	while (tmp != NULL)
	{
		nxt = tmp->next;
		f(tmp);
		tmp = nxt;
	}
	lst = NULL;
}
