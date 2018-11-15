/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:07:05 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/15 15:19:49 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *nxt;

	tmp = *alst;
	while (tmp != NULL)
	{
		nxt = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = nxt;
	}
	*alst = NULL;
}
