/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:43:23 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/11 18:35:38 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	tmp = (char *) s;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			j = i;
		}
		i++;
	}
	if ((char) c == '\0')
	{
		return (tmp + i);
	}
	return (tmp + j);
}
