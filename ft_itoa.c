/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:39:14 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:00:49 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_abs(long int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

static int	ft_len(long int n)
{
	int		len;

	if (n <= 0)
	{
		len = 1;
	}
	else
	{
		len = 0;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*new_string;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_len(n);
	new_string = (char *)malloc(sizeof(char) * len + 1);
	if (new_string == NULL)
		return (NULL);
	new_string[len] = '\0';
	len--;
	while (len >= 0)
	{
		new_string[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		new_string[0] = '-';
	return (new_string);
}

// A static function in C is a function that has 
// a scope that is limited to its object file.
// 
// Function itoa allocates memory and returns a 'fresh' string of characters
// terminated with a '\0' that is the char equivalent of the int passed in
// the parameter. Negative numbers should be managed as well. If the allocation
// fails the function will return NULL. NOTE: This is a recursive function. If
// you are unfamiliar with recursive functions it is a function which either
// calls itself or is in a potential cycle of function calls