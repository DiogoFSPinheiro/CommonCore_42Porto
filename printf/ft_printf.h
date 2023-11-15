/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:37:41 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/15 10:37:44 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int n, int fd, int c);
int		ft_putnbr_hexa(unsigned int nb, char *base, int fd, int c);
int		ft_putstr_fd(char *s, int fd);
int		ft_printf(const char *format, ...);
int		ft_putnbr_fd_u(unsigned int n, int fd, int c);
size_t	ft_strlen(const char *str);
int		ft_putnbr_ptr(unsigned long long nb, char *base, int fd, int c);

#endif
