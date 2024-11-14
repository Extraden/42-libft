/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:22:04 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/14 14:27:08 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t  ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*res;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	tmp = (char *) s;
	tmp += start;
	if (ft_strlen(tmp) < len)
		res = malloc(ft_strlen(tmp) + 1);
	else
		res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (tmp[i] && i < len)
	{
		res[i] = tmp[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
