/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:17:50 by abaur             #+#    #+#             */
/*   Updated: 2019/11/06 11:52:41 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns an array of strings,
** obtained by splitting the given string,
** using the given character as a separator.
**
** The array is NULL terminated.
*/

char	**ft_split(char const *s, char c)
{
	char				**results;
	unsigned int		wordcount;
	int					i;
	int					start;

	wordcount = 1;
	i = -1;
	while (s[++i])
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wordcount++;
	if (!(results = (char**)malloc(sizeof(char*) * wordcount)))
		return (NULL);
	i = -1;
	start = 0;
	wordcount = 0;
	while (s[++i])
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				start = i;
			if (s[i + 1] == c || s[i + 1] == '\0')
				results[wordcount++] = ft_substr(s, start, i + 1 - start);
		}
	results[wordcount] = NULL;
	return (results);
}

/*
** Applies the function `f` to each character of the given string
** to create a new string resulting fromsuccessive applications
** of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;

	len = 0;
	while (s[len])
		len++;
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (--len >= 0)
		result[len] = f(len, s[len]);
	return (result);
}
