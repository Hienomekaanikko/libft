/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:58:55 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:59:30 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Compare the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found,
respectively, to be less than, to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as
unsigned char) that differ in s1 and s2. If n is zero, the return value is zero.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char	*str2;
	int	i;

	str1 = s1;
	str2 = s2;
	i = 0;

	while (n > 0)
	{
		if (str1[i] == str2[i])
		{
			n--;
			i++;
		}
	}
	return (str1 - str2);
}
