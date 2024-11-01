/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:22:34 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 15:41:57 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
try to find first instance with memchr and somehow in reverse also.
*/

char	*allocate_memory(int new_length)
{
	char	*ptr;

	ptr = malloc(new_length * sizeof(char) + 1);
	if (ptr == NULL)
		return (0);
	return (ptr);
}

int	trim_start(char const *s1, char const *set)
{
	int	trim;
	int	i;
	int	j;

	trim = 0;
	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			trim++;
			ft_memset((char *)s1, 0, trim);
			i++;
		}
		else
			j++;
	}
	return (trim);
}

int	trim_end(char const *s1, char const *set)
{
	int	trim;
	int	i;
	int	j;

	trim = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			trim++;
			ft_memset((char *)s1 + i, 0, trim);
			i--;
		}
		else
			j++;
	}
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	trim;
	int	new_length;
	int	orig_length;
	char	*new_str;

	orig_length = ft_strlen(s1);
	new_length = 0;
	trim = trim_end(s1, set);
	new_length += orig_length - trim;
	trim = trim_start(s1, set);
	new_length = new_length - trim;
	new_str = allocate_memory(new_length);
	ft_memmove(new_str, s1 + trim, new_length);
	new_str[new_length] = '\0';
	return (new_str);
}

int	main(void)
{
	char	str[] = "000HELLO111";
	printf("%s\n", str);
	printf("%s\n", ft_strtrim(str, "0"));
}
