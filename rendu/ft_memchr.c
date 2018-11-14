/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:11:43 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/12 10:25:59 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	int i;

	i = 0;
	if (!(s))
		return (NULL);
	str = (unsigned char*)s;
	while (n > 0 && str[i] != (unsigned char)c)
	{
		n--;
		i++;
	}
	if (n == 0)
		return (NULL);
	else
		return (str);
}
