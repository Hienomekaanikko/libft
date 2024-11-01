/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:36:27 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:59:03 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Search for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *temp;
	temp = s;
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
		{
			return ((void *)&temp[i]);
		}
		i++;
	}
	return (NULL);
}
