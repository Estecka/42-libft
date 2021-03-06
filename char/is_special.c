/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:52:49 by abaur             #+#    #+#             */
/*   Updated: 2020/11/15 16:47:26 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int		ft_isascii(int c)
{
	return (0x0 <= c && c <= 0x7f);
}

extern int		ft_isprint(int c)
{
	return ((' ' <= c && c <= '?')
		|| ('@' <= c && c <= '_')
		|| ('`' <= c && c <= '~'));
}

extern short	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}
