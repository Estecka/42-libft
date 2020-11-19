/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:15:14 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 22:24:35 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			*ft_setptr(const void **var, const void *value)
{
	*var = value;
	return ((void*)value);
}

char			ft_setchar(char *var, char value)
{
	*var = value;
	return (value);
}

int				ft_setint(int *var, int value)
{
	*var = value;
	return (value);
}

unsigned int	ft_setuint(unsigned int *var, unsigned int value)
{
	*var = value;
	return (value);
}
