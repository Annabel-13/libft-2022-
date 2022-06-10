/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:18:05 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:19:05 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}

// strchr - locate character in string
// The strchr() function locates the first occurrence of d (converted to a char)
// n the string pointed to by s.  The terminating null character is considered
// to be part of the string; therefore if c is `\0',
// the functions locate the terminating `\0'.
// The functions strchr() return a pointer to the located
// character, or zero if the character does not appear in the string.