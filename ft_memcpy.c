/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:11:35 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:05:40 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*src_char;
	unsigned char		*dst_char;
	size_t				i;

	i = 0;
	src_char = src;
	dst_char = dst;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}

// this function copies n bytes from memory area src to
// memory area dst. If dst and src overlap, behavior is undefined. Applications
// in which dst and src might overlap should use ft_memmove instead. This
// function returns the original value of dst