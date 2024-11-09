/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:33:28 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/08 18:28:31 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	i;

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		((char *) str)[i] = 0;
		i++;
	}
	return (str);
}
