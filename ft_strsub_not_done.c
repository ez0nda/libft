/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:37:57 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/08 14:57:09 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;
	unsigned int i;

	sub = NULL;
	i = 0;

	while ((s[start]) && (start < (start + len)))
	{
		sub[start] = s[start];
		start++;
	}
	sub[start + 1] = '\0';
	return (sub);
}

int		main(void)
{
	printf("%s", ft_strsub("testtt", 2, 2));
	return (0);
}
