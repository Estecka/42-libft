/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:58:31 by abaur             #+#    #+#             */
/*   Updated: 2019/11/04 13:27:10 by abaur            ###   ########.fr       */
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

	l = 0;
	while (l < (len + start) && s[l] != '\0')
		l++;
	result = (char*)malloc(sizeof(char) * (l - start));
	if (!result)
		return (NULL);
	i = start;
	while (i < l)
	{
		result[i - start] = s[i];
		i++;
	}
	result[l] = '\0';
	return (result);
}

/*
** Allocates and returns a new string, result of the concatenation of s1 and s2
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	int			i;
	char		*result;
	const char	*cursor;

	len = 1;
	cursor = s1;
	while (*(cursor++) != '\0')
		len++;
	cursor = s2;
	while (*(cursor++) != '\0')
		len++;
	result = (char*)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	i = 0;
	cursor = s1;
	while (*cursor != '\0')
		result[i++] = *(cursor++);
	cursor = s2;
	while (*cursor != '\0')
		result[i++] = *(cursor++);
	result[len - 1] = '\0';
	return (result);
}
