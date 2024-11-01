/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:49:30 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:40:21 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Copy n bytes from memory area from to
memory area src.  The memory areas must not overlap. Use
ft_memmove if the memory areas do overlap.
Returns a pointer to dest.
*/
void	*memcpy(void *to, const void *from , size_t n)
{
	const char *from_temp;
	char *to_temp;
	int	i;

	from_temp = from;
	to_temp = to;
	i = 0;
	while (n > 0)
	{
		to_temp[i] = from_temp[i];
		n--;
		i++;
	}
	return (0);
}
