/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:58:31 by abaur             #+#    #+#             */
/*   Updated: 2019/11/05 11:26:53 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Allocates and duplicates the given string.
*/

char	*ft_strdup(const char *s1)
{
	size_t		len;
	char		*result;

	len = 0;
	while (s1[len] != '\0')
		len++;
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len--)
	{
		result[len] = s1[len];
		if (len == 0)
			break ;
	}
	return (result);
}


/*
** Returns wether the given string contains the given character.
*/

short	ft_strcontain(const char *s, char c)
{
	while (*s != '\0')
		if (*(s++) == c)
			return (1);
	return (0);
}

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

/*
** Allocates and returns a copy of the string given as argument,
** without the characters specified in the the set argument,
** at the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*result;
	const char	*cursor;

	len = 0;
	cursor = s1;
	while (*(cursor++) != '\0')
		len++;
	result = (char*)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	cursor = result;
	while (*s1 != '\0')
	{
		if (ft_strcontain(set, *s1))
			*(cursor++) = *s1;
		s1++;
	}
	*cursor = '\0';
	return (result);
}
