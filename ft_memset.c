/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:37:08 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:42:36 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int x, size_t n)
{
	char *temp;
	int	i;

	temp = dest;
	i = 0;
	while (n > 0)
	{
		temp[i] = x;
		n--;
		i++;
	}
	return (void *)dest;
}
