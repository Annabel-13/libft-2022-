/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:54:13 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 19:08:24 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	c;

	c = 0;
	ft_memset(s, c, n);
}

//Function bzero -- write NULL to a byte string
//The bzero() function writes n zeroed bytes to the string s.
//If n is lit zero, bzero() does nothing.