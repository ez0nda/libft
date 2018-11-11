/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:51:13 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/11 05:31:37 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	int c;

	i = 0;
	c = 0;
	while (s1[i] && i < size)
		i++;
	while (s2[c])
		c++;
	return (c + i);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("ft_strlcat = %lu\n", ft_strlcat(av[1], av[2], 3));
	printf("strlcat = %lu\n", strlcat(av[1], av[2], 3));
	return (0);
}
