/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:58:31 by abaur             #+#    #+#             */
/*   Updated: 2019/11/04 12:59:20 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Allocate and returns a substring from the string given in argument.
** The substring begins at index `start` and is of maximum size `len`.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*result;
	size_t	i;

	l = -1;
	while (l < len)
	{
		l++;
		if (s[l] == '\0')
			break ;
	}
	result = malloc(sizeof(char) * l);
	if (!result)
		return (NULL);
	i = -1;
	while (++i < l)
		result[i] = s[i];
	return (result);
}
