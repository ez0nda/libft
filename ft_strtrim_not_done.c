/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:28:11 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/08 16:38:31 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int i;
	int n;
	char *str;

	i = 0;
	n = 0;
	str = NULL;
	while (s[i] <= 32)
		i++;
	while (s[i])
	{
		str[n] = s[i];
		i++;
		n++;
	}
	str[n] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("%s", ft_strtrim(av[1]));
	return (0);
}
