/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:42:17 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:54:23 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[0] == '\0' || s2[0] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

//Function compares not more than n characters.
//Cuz strncmp() is designed for comparing string
//rather than binary data. Characters that appear
//after a '\0' character are not compared.