/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:43:50 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 21:47:08 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft_char.h"
# include "libft_malloc.h"
# include "libft_memory.h"
# include "libft_norme.h"
# include "libft_string.h"
# include "libft_write.h"

# include <stdlib.h>

int			ft_atoi(const char *str);
int			ft_atoi_base(const char *str, const char *base);
char		*ft_itoa(int n);
char		*ft_itoa_base(int nbr, const char *base);

/*
** Bonus
*/

typedef struct s_list	t_list;
struct		s_list
{
	void			*content;
	struct s_list	*next;
};

t_list		*ft_lstnew(void *content);

int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstadd_back(t_list **alst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));

void		ft_lstiter(t_list *lst, void (*f)(void*));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));

#endif
