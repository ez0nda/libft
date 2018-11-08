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

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t i;
	int n;
	char *str;

	i = 0;
	n = 0;
	str = 0;
	if (to_find[i] == '\0')
		return ((char *)s);
	while (s[i] != '\0' && i < len)
	{
		if (s[i] == to_find[0])
		{
			str = (char *)s + i;
			n = 0;
			while ((str[i + n] == to_find[n]) && (i + n < len))
			{
				if (to_find[n + 1] == '\0')
					return (str);
				n++;
			}
			str = 0;
		}
		i++;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("%s", ft_strnstr(av[1], av[2], 50));
	return (0);
}
