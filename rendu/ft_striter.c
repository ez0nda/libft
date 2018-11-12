/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:50:27 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/10 22:16:27 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}

int		main(void)
{
	void (*f)(char*);

	f = &ft_putstr;
	ft_striter("test", f);
	return (0);
}
