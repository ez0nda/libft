/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:09:30 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/09 17:08:16 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int i;
	char *str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (12))))
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = -n;
	}
/*	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}*/

	else
	{
		n = n + '0';
		str[i] = n;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	printf("%s", ft_itoa(42));
	return (0);
}
