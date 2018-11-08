/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:14:15 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/08 10:15:56 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int n;

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
