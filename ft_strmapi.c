/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:58:41 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:54:05 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	len;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*This function is exactly the same as ft_strmap except that when we run
* our given function f on the character we also pass to f the specific
* index of our character in the given string.*/