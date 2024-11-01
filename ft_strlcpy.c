#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*src != '\0' || i < size)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
			i++;
		}
		else
			return (i);
	}
	while (src[i] != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	return (i);
}
