/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:23:52 by abaur             #+#    #+#             */
/*   Updated: 2019/11/12 11:31:26 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

typedef struct s_list	t_list;
struct	s_list
{
	void			*content;
	struct s_list	*next;
};

t_list	*ft_lstnew(void *content);

//int		ft_lstsize(t_list *lst);
//t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);

//void	ft_lstdrlone(t_list *lst, void (*del)(void*));
//void	ft_lstclear(t_list **lst, void (*del)(void*));

//void	ft_lstiter(t_list *lst, void (*f)(void*));
//t_list	*ft_listmap(t_list *lst, void *(*f)(void*));

#endif
