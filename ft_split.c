/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:57:30 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 21:06:20 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

// *This function will allocate memory and return 
// a 'fresh' table of strings (all
// * terminated by a '\0', the table as well) as 
// a result of the splitting of
// * the given string by the given character c. 
// If memory allocation fails at
// * any point the function will return NULL. 
// And example of this function is
// * ft_split("*welcome*to*the*club*buddy", '*'). 
// This should return a table
// * that splits the string int ["welcome", 
// "to", "the", "club", "buddy"].
// * This function must be done in three parts. 
// We will start at the ft_strsplit
// * function at the bottom. We put ft_strsplit 
// at the end of our code because in
// * order to  use other functions we make specifically 
// for it we have to make sure
// * we have them made before we get 
// to our actual function.*/