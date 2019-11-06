/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:05:07 by abaur             #+#    #+#             */
/*   Updated: 2019/11/06 12:13:17 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Allocates enough memory for `count` objects that are `size` bytes long,
** and fills the memory with 0's.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	size *= count;
	result = malloc(size);
	i = 0;
	while (i < size)
		result[i++] = '\0';	
	return (result);
}
