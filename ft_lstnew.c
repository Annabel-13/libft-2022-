/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboichuk <hboichuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:31:12 by hboichuk          #+#    #+#             */
/*   Updated: 2022/05/26 20:58:25 by hboichuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(struct s_list));
	temp->content = content;
	temp->next = NULL;
	return (temp);
}

// allocate memory using
// The data contained in the node.
// make next point to NULL
//return the new node
// 
// A linked list is a linear data structure, in which the elements 
// are not stored at contiguous memory locations. 
// The elements in a linked list are linked using 
// pointers as shown in the below image
// 
/*We will be allocating memory for, and returning, a "fresh" linked list. The
* elements content and content_size within our new link will be copied from the
* parameters of the function. If the parameter content is NULL the the element
* content_size is initialized to 0 regardless of the paramter of content_size.
* The element of next is initialized to NULL. If the memory allocation fails
* then we will return NULL*/