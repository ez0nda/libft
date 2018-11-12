/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 03:42:23 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/12 09:07:21 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		while ((str[i + j] == to_find[j]) && (str[i]) && (to_find[j]))
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
