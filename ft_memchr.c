/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:11:42 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:04:04 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_char;
	size_t	i;

	i = 0;
	s_char = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s_char[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}

// memchr locates the first occurence of c
// (converted to an unsigned char) in string s. ft_memchr returns a pointer to
// the byte located, or NULL if no such byte exists within n bytes.