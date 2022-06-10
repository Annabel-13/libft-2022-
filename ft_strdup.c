/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:43:43 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:30:15 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *) malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// This function returns a pointer to a null-terminated byte string, which is a
// duplicate of the string pointed to by s1. The memory obtained is done
// dynamically using malloc.
// It returns a pointer to the duplicated string s1 - temp.