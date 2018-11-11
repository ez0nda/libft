/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 00:50:36 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/11 03:50:22 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (1)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		else if (s[i--] == '\0')
			return (NULL);
	}
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strrchr(av[1], 101));
	printf("%s", strrchr(av[1], 101));
	return (0);
}
