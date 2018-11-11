/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:51:38 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/11 02:29:57 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	test(char c)
{
	c = c + 1;
	return (c);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	while (s[i])
		i++;
	str = ft_strnew(i);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	(void)ac;
	char (*f)(char);

	f = &test;
	printf("%s", ft_strmap(av[1], f));
	return (0);
}
