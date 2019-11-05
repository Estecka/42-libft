/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:32:09 by abaur             #+#    #+#             */
/*   Updated: 2019/11/05 17:46:30 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			indexof(char c, const char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

static int	base_size(const char *base)
{
	int		i;

	i = -1;
	while (base[++i])
		if (ft_strcontain("\t\n\r\v\f +-", base[i])
			|| ft_strcontain(&base[i + 1], base[i]))
			return (0);
	return ((i < 2) ? 0 : i);
}

int			ft_atoi_base(const char *str, const char *base)
{
	short	sign;
	int		dozen;
	int		result;
	int		digit;

	if (!(dozen = base_size(base)))
		return (0);
	while (ft_strcontain("\t\n\r\v\f ", *str))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	result = 0;
	while (*str)
	{
		digit = indexof(*str, base);
		if (digit < 0)
			return (result);
		result *= dozen;
		result += digit * sign;
		str++;
	}
	return (result);
}
