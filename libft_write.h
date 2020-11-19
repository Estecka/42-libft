/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_write.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:53:48 by abaur             #+#    #+#             */
/*   Updated: 2020/11/19 21:00:42 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_WRITE_H
# define LIBFT_WRITE_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

ssize_t	ft_dputchar(int fd, char c);
ssize_t	ft_dputstr(int fd, const char *s);
ssize_t	ft_dputendl(int fd, const char *s);
ssize_t	ft_dputnbr(int fd, int n);

#endif
