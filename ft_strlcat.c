/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:46:05 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:33:17 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t		dst_len;
	int			src_len;
	size_t		i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	if (dstsize > dst_len)
	{
		while (dst_len + 1 + i < dstsize && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}	
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

//size-bounded string copying and concatennation
// The strlcat() function appends the NUL-termin string src to the end of dst.
// It will append at most size - strlen(dst) - 1 bytes, NUL-termin the result.