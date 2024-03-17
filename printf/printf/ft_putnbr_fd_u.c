/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:20:05 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/15 12:20:17 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_u(long int n, int fd, int c)
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
	return (c);
}
