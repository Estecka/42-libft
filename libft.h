/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:43:50 by abaur             #+#    #+#             */
/*   Updated: 2019/11/06 12:07:34 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

char	*ft_strdup(const char *s1);
short	*ft_strcontain(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		indexof(char c, const char *str);
int		ft_atoi(const char *str);
int		ft_atoi_base(const char *str, const char *base);
char	*ft_itoa(int n);
char	*ft_itoa_base(int nbr, const char *base);

void	*ft_calloc(size_t count, size_t size);

#endif
