/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 02:32:47 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/11 02:59:27 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	test(unsigned int n, char c)
{
	c = c + n;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	(void)ac;
	char (*f)(unsigned int, char);

	f = &test;
	printf("%s", ft_strmapi(av[1], f));
	return (0);
}
