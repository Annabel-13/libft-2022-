/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:19:42 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/29 23:01:00 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
		n--;
	}
	return (0);
}

// {
// 	char	*string1;
// 	char	*string2;

// 	string1 = (char *)s1;
// 	string2 = (char *)s2;
// 	if (string1[0] == 0)
// 		return (-1);
// 	return (ft_strncmp(string1, string2, n));
// }
// function compares byte string s1 against byte string
// s2. Both strings are assumed to be n bytes long. The ft_memcmp function
// returns zero if the two strings are identical, otherwise it returns the
// difference between the first two differing bytes (treated as unsigned char
// values, so that '\200' is greater than '\0', for example). Zero-length
// strings are always identical.