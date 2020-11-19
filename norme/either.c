/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   either.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:50:11 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 22:13:11 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			*eitherptr(const void *a, const void *b)
{
	if (a)
		return ((void*)a);
	else
		return ((void*)b);
}

char			eitherchr(char a, char b)
{
	if (a)
		return (a);
	else
		return (b);
}

int				eitherint(int a, int b)
{
	if (a)
		return (a);
	else
		return (b);
}

unsigned int	eitheruint(unsigned int a, unsigned int b)
{
	if (a)
		return (a);
	else
		return (b);
}
