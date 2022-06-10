/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:30:16 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:09:18 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!(s) || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		s++;
	}
	write(fd, "\n", 1);
}

// *This function writes the string s to the file descriptor fd followed by a
// * '\n' to make a new line.