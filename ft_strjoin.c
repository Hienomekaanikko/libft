/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:47:08 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/18 09:53:47 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		total_length;
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_length = s1_len + s2_len + 1;
	new_str = ft_calloc(total_length, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_memmove(new_str, s1, s1_len);
	ft_memmove(new_str + s1_len, s2, s2_len);
	return (new_str);
}
