/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:29:52 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:07:15 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*result;

	result = (unsigned char *)b;
	while (len > 0)
	{
		*result = c;
		result++;
		len--;
	}
	return (b);
}

//Function memset - fill a byte string with a byte value.
//The memset() function writes len bytes of value c
//(converted to an unsigned char) to the string b.
//The memset() function returns its first argument.