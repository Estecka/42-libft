/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dput_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:42:54 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 21:22:29 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

ssize_t	ft_dputchar(int fd, char c)
{
	return (write(fd, &c, 1));
}

ssize_t	ft_dputstr(int fd, const char *s)
{
	size_t len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	return (write(fd, s, len));
}

ssize_t	ft_dputendl(int fd, const char *s)
{
	return (ft_dputstr(fd, s) + write(fd, "\n", 1));
}

ssize_t	ft_dputnbr(int fd, int n)
{
	ssize_t	r;
	char	c;

	r = 0;
	if (n <= -10 || 10 <= n)
		r += ft_dputnbr(fd, n / 10);
	else if (n < 0)
		r += write(fd, "-", 1);
	n %= 10;
	c = '0' + (n < 0 ? -n : n);
	r += write(fd, &c, 1);
	return (r);
}
