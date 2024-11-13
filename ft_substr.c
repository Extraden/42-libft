/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:22:04 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/13 20:08:22 by dsemenov         ###   ########.fr       */
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

	tmp = (char *) s;
	tmp += start;
	if (ft_strlen(tmp) > len)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(len + 1);
	i = 0;
	while (tmp[i] && i < len)
	{
		res[i] = tmp[i];
		i++;
	}
	return (res);
}
