/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:28:23 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:45:06 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned char	*temp;
	int	i;

	i = 0;
	temp = ptr;
	while (n > 0)
	{
		temp[i] = 0;
		n--;
		i++;
	}
	return (ptr);
}
