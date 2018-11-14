/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 00:50:36 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/13 15:17:03 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *t;
	int i;

	t = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			t = (char*)s;
		i++;
	}
	if (s[i] == (char)c)
		return ((char*)s);
	else
		return (t);
}
