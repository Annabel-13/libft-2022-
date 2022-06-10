/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:35:10 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:06:30 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_char;
	char	*dst_char;

	src_char = (char *)src;
	dst_char = (char *)dst;
	if (src_char > dst_char && (dst_char || src_char))
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len > 0)
		{
			dst_char[len - 1] = src_char[len - 1];
			len--;
		}
	}
	return (dst);
}

// According to the man function copies len bytes from string src to string
// dst. The two strings may overlap; the copy is always done in a non
// destructive manner. The ft_memmove function returns the original value of
// dst.