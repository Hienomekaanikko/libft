#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t	i;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	return (ptr);
}
