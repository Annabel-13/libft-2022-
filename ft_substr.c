/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:08:04 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:55:38 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	new_len;

	if (s == 0)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	string = (char *) malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	ft_strlcpy(string, s + start, len + 1);
	return (string);
}

/* Allocates (with malloc() and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’. */