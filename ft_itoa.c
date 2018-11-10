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

int		ft_counter(int n)
{
	int len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	printf("taille = %d\n", len);
	return (len);
}

char		*ft_itoa(int n)
{
	int i;
	int nb;
	char *str;

	i = 0;
	nb = n;
	str = ft_strnew(ft_counter(n));
	if (n < 0)
		nb = -n;
	if (nb == 0)
	{
		str[i] = '0';
		i++;
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}

int		main(void)
{
	printf("%s", ft_itoa(-42));
	return (0);
}
