/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:05:07 by abaur             #+#    #+#             */
/*   Updated: 2019/11/06 12:31:25 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = s;
	i = 0;
	while (i < n)
		c[i++] = '\0';
}

/*
** Allocates enough memory for `count` objects that are `size` bytes long,
** and fills the memory with 0's.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	size *= count;
	result = malloc(size);
	ft_bzero(result, size);
	return (result);
}
