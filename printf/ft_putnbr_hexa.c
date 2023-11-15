/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:30:59 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/15 10:31:01 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned int nb, char *base, int fd, int c)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (nb >= len)
	{
		c = ft_putnbr_hexa(nb / len, base, fd, c);
		nb = nb % len;
	}
	if (nb < len)
		c += ft_putchar_fd(base[nb], fd);
	return (c);
}
