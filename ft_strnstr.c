/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:14:24 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:54:58 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t			i;
	size_t			j;
	char			*next_haystack;

	i = 0;
	next_haystack = (char *)haystack;
	if (!*needle)
		return (next_haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (next_haystack + i);
		i++;
	}
	return (NULL);
}

/*This function locates the first occurrence of the substring 's2' in the
**string 's1' and returns a pointer to this position.*/