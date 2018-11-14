/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:51:13 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/14 14:52:40 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	int		c;
	int n;

	i = 0;
	c = 0;
	n = ft_strlen(s1);

	while (s1[i] && i < size)
		i++;
	while (s2[c])
		c++;
	return (c + i);
}
