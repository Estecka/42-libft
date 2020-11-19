/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_norme.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:45:30 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 22:13:50 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NORME_H
# define LIBFT_NORME_H

/*
** Returns one value or the other depending on whether the condition is true.
** @param bool condition	The condition to meet.
** @param void* yes	The value to return if true.
** @param void* no	The value to return if false.
** @return void*	Either the value from `yes` or `no`
*/

void			*ft_ternary(short condition, void *yes, void *no);

/*
** Returns the first non-null parameter.
** @param value   	The first value to evaluate.
** @param fallback	The fallback value.
** @return	Either `value` or `fallback`
*/

void			*eitherptr(const void *value, const void *fallback);
char			eitherchr(char value, char fallback);
int				eitherint(int value, int fallback);
unsigned int	eitheruint(unsigned int value, unsigned int fallback);

#endif
