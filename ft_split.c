/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:42:11 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 17:09:44 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**array_of_strings;
	int	i;
	int y;
	int	splits;

	i = 0;
	splits = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			splits++;
		i++;
	}
	array_of_strings = malloc(splits * sizeof(char*));
	if (array_of_strings == NULL)
		return (0);
	i = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			y++;
		else
			array_of_strings[y][i] = s[i];
		i++;
	}
	return (array_of_strings);
}

int	main(void)
{
	int	i;
	char	str[] = "HELLOO5MITAA5KUUULUUU5MITAMITA";
	char	**str1;

	i = 0;
	printf("%s\n", str);
	str1 = ft_split(str, '5');
	while (*str1[i] != '\0')
	{
		printf("%s", str1[i]);
		i++;
	}

}
