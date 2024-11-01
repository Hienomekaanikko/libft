/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:47:08 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 14:40:40 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Joins two strings into a new allocated memory according to the needed size.
Returns a pointer to the new string or NULL if allocation fails.
*/
int	count(char const *s1, char const *s2)
{
	int	total_length;

	total_length = 0;
	total_length += ft_strlen(s1);
	total_length += ft_strlen(s2);
	return (total_length);
}

char	*allocate_memory(int total_length)
{
	char	*ptr;
	ptr = malloc(total_length * sizeof(char) + 1);
	if (ptr == NULL)
		return (0);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int total_length;
	char	*joinedstr;
	total_length = count(s1, s2);
	joinedstr = allocate_memory(total_length);
	ft_strlcat(joinedstr, s1, total_length);
	ft_strlcat(joinedstr, s2, total_length);
	return (joinedstr);
}
