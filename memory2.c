/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:05:49 by abaur             #+#    #+#             */
/*   Updated: 2019/11/06 15:41:59 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Copies `len` bytes from `src` to `dst`.
** The memory areas may overlap, in which case dst will overwrite src.
*/

//untested

void	*ft_memove(void *dst, const void *src, size_t len)
{
	char	*fro;
	char	*to;
	size_t	i;
	short	sign;

	to = (char*)src;
	fro = (char*)src;
	sign = dst < src ? +1 : -1;
	i = dst < src ? 0 : len - 1;
	while (i < len)
	{
		to[i] = fro[i];
		if (sign < 0 && i == 0)
			break ;
		i += sign;
	}
	return (dst);
}

/*
** Locates the first occurence of `c` in `s`.
*/

//untested

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)s == (unsigned char)c)
			return ((void*)s);
		i++;
	}
	return (NULL);
}

/*
** Compares byte string `s1` against `s2`.
** Returns the difference between the first different pair.
*/

//untested

int		memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (*c1 != *c2)
			return (c1 - c2);
		c1++;
		c2++;
		i++;
	}
	return (0);
}
