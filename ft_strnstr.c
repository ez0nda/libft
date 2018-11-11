/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 03:42:23 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/11 04:13:18 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		while ((str[i + j] == to_find[j]) && (str[i]) && (to_find[j]))
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("%s\n", ft_strnstr(av[1], av[2], 5));
	printf("%s", strnstr(av[1], av[2], 5));
	return (0);
}
