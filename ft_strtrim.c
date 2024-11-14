/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:41:39 by dsemenov          #+#    #+#             */
/*   Updated: 2024/11/14 18:21:35 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);

size_t	first_index(char const *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	has_char;

	i = 0;
	while (s1[i])
	{
		has_char = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				has_char = 1;
			j++;
		}
		if (has_char == 0)
			break;
		i++;
	}
	return (i);
}


size_t	last_index(char const *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	has_char;

	i = ft_strlen(s1) - 1;
	while (i)
	{
		has_char = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				has_char = 1;
			j++;
		}
		if (has_char == 0)
			break;
		i--;
	}
	return (i);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;
	size_t	is_blank;

	if (!*s1)
	{
		res = malloc(1);
		res[0] = '\0';
		return res;
	}

	is_blank = 1;
	i = 0;
	while (s1[i])
	{
		if (!((s1[i] >= 9 && s1[i] <= 13) || (s1[i] == ' ')))
		{
			is_blank = 0;
			break;
		}
		i++;
	}
	if (is_blank)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	i = 0;
	j = 0;
	start = first_index(s1, set);
	end = last_index(s1, set);
	
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
