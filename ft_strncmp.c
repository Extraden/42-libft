/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:18:33 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/13 14:20:40 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

/*
int	main(void)
{
	char	s1[100] = "Hello";
	char	s2[100] = "Hella";
	strncmp()
}
*/

/*
int main(void)
{
	char *ptr;

	ptr = '\0';
	__builtin_printf("%s\n", ptr);

	ptr = "\0";
	__builtin_printf("%p\n", ptr);

	ptr = "asdasd";
	__builtin_printf("%p\n", ptr);
}
*/
