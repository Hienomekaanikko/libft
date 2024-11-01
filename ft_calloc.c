/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:23:12 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:40:04 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if (nelem == 0 || elsize == 0)
		return NULL;
	ptr = malloc(nelem * sizeof(elsize));
	if (ptr == NULL)
		return (NULL);
	else
		printf("Memory allocation successfull!\n");
	return (ptr);
}
