/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:49:38 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:45:29 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Copy n bytes from memory area src to
memory area dest.  The memory areas may overlap: copying takes
place as though the bytes in src are first copied into a
temporary array that does not overlap src or dest, and the bytes
are then copied from the temporary array to dest.

Returns a pointer to dest.
*/
 void	*ft_memmove(void *dest, const void *src, size_t n)
 {
	char	*dest_temp;
	const char	*src_temp;
	size_t	i;

	dest_temp = dest;
	src_temp = src;
	i = 0;

	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return ((void *)dest_temp);
 }
