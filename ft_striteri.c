/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:14:33 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:32:48 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}

/*This function applies the parameter function f to each character of a string
* also passed in it's parameter at at precisely that character's index string
* position. Each character that is passed into the function f is modified if
* necessary.*/