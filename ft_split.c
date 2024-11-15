/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:48:24 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/15 15:24:38 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words_num;
	size_t	in_word;

	in_word = 0;
	i = 0;
	words_num = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			words_num++;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (words_num);
}

char    **ft_split(char const *s, char c)
{
	char	**res;
	size_t	words_num;

	words_num = count_words(s, c);
	res = malloc((words_num + 1) * sizeof (char *));
	if (!res)
		return (NULL);
	res[words_num] = NULL;
	return (res);
}


int	main(void)
{
	char	*s = "Hello, my name, is";
	char	c = '\0';

	__builtin_printf("%zu\n", count_words(s, c));
	__builtin_printf("%p", ft_split(s, c));
}
