#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	letter;

	letter = 'A' - 1;
	while (letter <= 'Z' + 1)
	{
		printf("%d", ft_isalpha(letter));
		letter++;
	}
	//res = ft_isalpha('B');
	//printf("%d\n", res);
}
*/
