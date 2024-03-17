/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:15:39 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/14 15:15:41 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (type == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1, 0));
	else if (type == 'x')
		return (ft_putnbr_hexa(va_arg(args, int), "0123456789abcdef", 1, 0));
	else if (type == 'X')
		return (ft_putnbr_hexa(va_arg(args, int), "0123456789ABCDEF", 1, 0));
	else if (type == 'p')
		return (ft_putnbr_ptr(va_arg(args, int), "0123456789abcdef", 1, 0));
	else if (type == 'u')
		return (ft_putnbr_fd_u(va_arg(args, int), 1, 0));
	else if (type == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			len += print_format(*(++format), args);
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (len);
}
