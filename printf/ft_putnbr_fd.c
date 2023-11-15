/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:08:08 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/09 12:08:09 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int c)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		c = 11;
	}
	else 
	{
		if (n < 0)
		{
			c += ft_putchar_fd('-', fd);
			n = -n;
		}
		while (n > 9)
		{
			c = ft_putnbr_fd(n / 10, fd, c);
			n = n % 10;
		}
		if (n < 10) 
			c += ft_putchar_fd(n + 48, fd);
	}
	return (c);	
}
