/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:48:50 by abaur             #+#    #+#             */
/*   Updated: 2019/11/12 11:26:37 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"
#include <stdlib.h>

/*
** Allocates a new list element.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}

/*
** Adds the given element at the beginning of the list.
** Returns the first element of the list through `alst`.
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	(*alst = new);
}

/*
** Adds the given element at the end of the list.
** Returns the first element of the list through `alst`.
*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*cursor;

	if (!**alst)
		return (void)(*alst = new);
	cursor = *alst;
	while (cursor->next)
		cursor = cursor->next;
	cursor->next = new;
}
