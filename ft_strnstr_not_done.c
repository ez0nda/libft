/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:02:39 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/08 11:13:52 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	int n;;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return ((char *)&str[i]);
	while (str[i])
	{
		while ((str[i + n] == to_find[n]) && (str[i]) && (to_find[n]))
		{
			n++;
			if (to_find[n] == '\0')
				return ((char *)&str[i]);
		}
		n = 0;
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("%s", ft_strnstr(av[1], av[2], 3));
	return (0);
}
