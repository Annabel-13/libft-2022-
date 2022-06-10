/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:08:58 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 19:09:07 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = malloc(count * size);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ft_memset(buffer, 0, count * size);
	return (buffer);
}

// Function calloc gives you a zero-initialized buffer, while malloc leaves
// the memory uninitialized.