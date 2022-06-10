/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:07:47 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:43:43 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	char		*src_char;
	size_t		len;

	i = 0;
	len = 0;
	src_char = (char *)src;
	if (!dst)
		return (0);
	len = ft_strlen(src_char);
	if (!dstsize)
		return (len);
	while (src_char != 0 && i < dstsize - 1)
	{
		if (*src != '\0')
			*dst++ = *src++;
		else
			break ;
		i++;
	}
	*dst = '\0';
	return (len);
}

//size-bounded string copying
// strlcpy function copies the string pointed by source including the null
// character to the destination.strlcpy function also returns the copied string.