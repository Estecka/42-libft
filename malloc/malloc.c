/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:58:52 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 19:17:10 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_memory.h"

#include <stdlib.h>

extern void			*ft_calloc(size_t count, size_t size)
{
	void	*result;

	size *= count;
	result = malloc(size);
	if (result)
		ft_bzero(result, size);
	return (result);
}

extern void			*malloc1d(size_t type, size_t lenght)
{
	return (ft_calloc(lenght + 1, type));
}

extern void*const	*malloc2d(size_t type, size_t width, size_t height)
{
	char			**result;
	char			*values;
	size_t			i;

	result = malloc(
		(sizeof(void*) * (width + 1))
		+ (type * (height + 1) * width));
	if (!result)
		return (NULL);
	values = (char*)(result + width + 1);
	i = -1;
	while (++i < (width * (height + 1) * type))
		values[i] = 0;
	i = -1;
	while (++i < width)
		result[i] = values + (i * (height + 1) * type);
	result[width] = NULL;
	return ((void**)result);
}
