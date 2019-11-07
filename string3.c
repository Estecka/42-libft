/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:10:07 by abaur             #+#    #+#             */
/*   Updated: 2019/11/07 13:37:19 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Locates the last occurence of `c` in `s` and points to it.
*/

//untested

char	*ft_strrchr(const char *s, int c)
{
	const char *result;

	result = NULL;
	while (1)
	{
		if (*s == (char)c)
			result = s;
		if (!*s)
			break ;
		s++;
	}
	return ((char*)result);
}

/*
** Locates the first occurence of `needle` in `haystack`,
** searching no further than `len` characters.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*result;
	size_t		i;
	size_t		j;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (*needle == haystack[i])
		{
			j = 0;
			result = &haystack[i];
			while(j + i < len && needle[j] == haystack[j + i])
			{
				if (needle[j + 1] == '\0')
					return ((char*)result);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
