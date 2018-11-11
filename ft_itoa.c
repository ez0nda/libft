/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:09:30 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/10 22:22:03 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strsize(int n)
{
	int size;

	size = 0;
	if (n == 0)
		size++;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	int i;
	int nb;
	char *str;

	i = 0;
	nb = n;
	str = ft_strnew(ft_strsize(n));
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
