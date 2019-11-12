/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:50:18 by abaur             #+#    #+#             */
/*   Updated: 2019/11/12 12:48:35 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Frees the memory allocated to the element
** and deletes its content with the given method.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del)
		del(lst->content);
	free(lst);
}

/*
** Frees the memory allocated to the given element and all the following,
** and deletes their content with the given method.
*/

void	ft_lstclear(t_list *lst, void (*del)(void*))
{
	t_list	next;

	while (lst)
	{
		next = lst->next;
		if (del)
			del(lst->content);
		free(lst);
		lst = next;
	}
}
