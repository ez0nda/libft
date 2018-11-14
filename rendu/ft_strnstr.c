/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 03:42:23 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/14 12:50:27 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	len;
	int		cmp;

	if (*str == '\0')
		return (NULL);
	if (*to_find == '\0')
		return ((char*)str);
	len = ft_strlen(to_find);
	cmp = 1;
	while (len <= n && *str != '\0' && (cmp = ft_strncmp(str, to_find, len)))
	{
		n--;
		str++;
	}
	if (cmp != 0)
		return (NULL);
	else
		return ((char *)str);
}
