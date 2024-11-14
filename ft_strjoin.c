/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:29:59 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/14 14:39:52 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t  ft_strlen(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*res;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(total_len + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	ft_strlcat(res, s1, total_len + 1);
	ft_strlcat(res, s2, total_len + 1);
	return (res);
}
