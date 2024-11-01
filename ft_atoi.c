/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:31:44 by msuokas           #+#    #+#             */
/*   Updated: 2024/11/01 15:05:55 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Convert initial portion of numbers in a string to an integer value.
Returns the integer value.
*/
int ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	minuses;
	int	pluses;

	i = 0;
	result = 0;
	minuses = 0;
	pluses = 0;
	while ((str[i] >= 8 && str[i] <= 13) || (str[i] == 32) || (str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			minuses++;
		else if (str[i] == '+')
			pluses++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minuses > 1 || pluses > 1)
		return (0);
	else if ((pluses == 1 || pluses == 0) && (minuses == 0))
		return (result);
	else if (minuses == 1)
		return (-result);
	else
		return (0);
}
