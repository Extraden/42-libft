/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:12:32 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/09 16:09:28 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char s[30] = "Hello!";
	char d[30] = "Friend!";
	printf("Orig func:\n");
	printf("%zu\n", strlcpy(d, s, 0));
	printf("%s\n", d);

	char a[30] = "Hello!";
	char b[30] = "Friend!";
	printf("My func:\n");
	printf("%zu\n", ft_strlcpy(b, a, 0));
	printf("%s\n", b);
}
