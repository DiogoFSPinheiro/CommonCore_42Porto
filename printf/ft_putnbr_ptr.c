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
