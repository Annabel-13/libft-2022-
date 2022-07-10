/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:47:25 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:33:04 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*string;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (string == NULL)
		return (NULL);
	if (s1)
		while (s1[++i] != '\0')
			string[i] = s1[i];
	while (s2[j] != '\0')
		string[i++] = s2[j++];
	string[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (string);
}

/*This function allocates memory and returns a new string terminated by a '\0'
* which is the result of a concatenation of the parameters s1 and s2. If the
* allocation fails the function will return NULL.*/
