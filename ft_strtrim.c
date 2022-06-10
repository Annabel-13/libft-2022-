/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:45:41 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/27 17:47:29 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	i;
	size_t	j;

i = 0;
new_string = 0;
j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
new_string = (char *) malloc(sizeof(char) * j - i + 1);
	if (new_string)
		ft_strlcpy(new_string, &s1[i], j - i + 1);
	return (new_string);
}

/*This function allocates memory and returns a copy of the string passed in the
* parameter but without any kind of blank spaces at the start or the end of
* the string. This function considers blank spaces to be the characters ' ',
* a standard space, '\n', a new line, and '\t', which is a tabulation space.
* If there are no spaces at the beginning and end of the parameter string s
* the function returns a copy of s. If the allocation of memory fails the
* function returns NULL.*/