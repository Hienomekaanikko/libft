/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:22:42 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 17:09:07 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[y] && n > 0)
		{
			i++;
			y++;
			n--;
		}
		if (s2[y] == '\0')
		{
			return (char *)&s1[i - y];
		}
		y = 0;
		i++;
	}
	return (0);
}
