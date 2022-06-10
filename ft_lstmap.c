/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:46:30 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:58:04 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;
	t_list	*new_element;

	temp = lst;
	new_list = NULL;
	while (temp)
	{
		new_element = ft_lstnew((*f)(temp->content));
		if (!new_element)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		temp = temp->next;
	}
	return (new_list);
}

// Creates a new list by applying the function f to the content of each
// element of lst. In case of problems creating an element, deletes the new
// list by using the function del.