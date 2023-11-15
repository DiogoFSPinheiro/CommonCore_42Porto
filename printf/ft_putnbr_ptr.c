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

int	ft_putnbr_ptr(unsigned long long nb, char *base, int fd, int c)
{
	unsigned long long	len;
	
	if (nb == 0)
	{
		c = ft_putstr_fd("(nil)", 1);
		return (c);
	}
	c += ft_putstr_fd("0x", 1);
	len = ft_strlen(base);
	if (nb >= len)
	{
		c = ft_putnbr_ptr(nb / len, base, fd, c);
		nb = nb % len;
	}
	if (nb < len)
		c += ft_putchar_fd(base[nb], fd);
	return (c);
}
