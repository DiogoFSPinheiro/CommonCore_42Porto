/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:30:59 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/15 10:31:01 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ptr(unsigned long long ptr, char *base, int fd, int c)
{
	unsigned long long	len;
	
	if (ptr == 0)
	{
		c = ft_putstr_fd("(nil)", 1);
		return (c);
	}
	c += ft_putstr_fd("0x", 1);
	len = ft_strlen(base);
	if (ptr >= len)
	{
		c = ft_putnbr_ptr(ptr / len, base, fd, c);
		ptr = ptr % len;
	}
	if (ptr < len)
		c += ft_putchar_fd(base[ptr], fd);
	return (c);
}
// cenas alteradas nem sei como funciona

int print_ptr(unsigned long long ptr, int fd)
{
    char *base;
    int c;
    c = 0;
    base = "0123456789abcdef";
    
    if (ptr >= 16)
	{
		c = print_ptr(ptr / 16, fd);
		ptr = ptr % 16;
	}
	if (ptr < 16)
		c += ft_putchar_fd(base[ptr], fd);
	return (c);
}


int	ft_putnbr_ptr(unsigned long long ptr, int fd)
{
	unsigned long long	len;
	int c;
	
	c = 0;

	if (ptr == 0)
	{
		c = ft_putstr_fd("(nil)", 1);
		return (c);
	}
	c = ft_putstr_fd("0x", 1);
	c += print_ptr(ptr, fd);

	return (c);
}

	return (ft_putnbr_ptr(va_arg(args, int), 1));

