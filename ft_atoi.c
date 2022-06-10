/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:40:02 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/29 18:25:13 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_exception(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		buffer;
	int		sign;

	buffer = 0;
	i = 0;
	sign = 1;
	while ((str[i] != '\0') && get_exception(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && str[i] >= '0' && str[i] <= '9')
	{
		buffer = buffer * 10 + (str[i] - '0');
		if (buffer >= 2147483647 && sign == 1)
			return (2147483647);
		if (buffer >= 2147483647 && sign == -1)
			return (-2147483647);
		i++;
	}
	return (sign * buffer);
}

// This is a recreation of the atoi function in C. We take a string of
// characters that are supposed to be a number converted into an int.
// According to the man, "The atoi function converts the initial portion of
// the string point to by str to int representation.