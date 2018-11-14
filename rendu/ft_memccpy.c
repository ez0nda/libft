/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:09:22 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/12 10:23:38 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{

	char *s1;
	char *s2;
	int i;

	s1 = (char*)src;
	s2 = (char*)dst;
	i = 0;
	while (n > 0 && s1[i] != c)
	{
		n--;
		s2[i] = s1[i];
		i++;
	}
	if (n > 0)
	{
		s2[i] = s1[i];
		i++;
		return ((void*)s2);
	}
	else
		return (NULL);
}
