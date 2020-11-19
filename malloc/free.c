/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 19:38:33 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 19:33:38 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern short	ft_free(void **ptr)
{
	if (*ptr)
		free(*ptr);
	*ptr = NULL;
	return (1);
}

extern short	ft_free4(void **ptr1, void **ptr2, void **ptr3, void **ptr4)
{
	ft_free(ptr1);
	ft_free(ptr2);
	ft_free(ptr3);
	ft_free(ptr4);
	return (1);
}

extern short	freearray(void **array)
{
	while (*array)
		ft_free(*(array++));
	return (1);
}

extern short	freearrayn(void **array, size_t size)
{
	while (size--)
		ft_free(*(array++));
	return (1);
}
