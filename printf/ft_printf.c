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

#include "libft.h"

int ft_printf(const char *, ...)
#include <stdarg.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	c;

	c = 0;
	while (s[c])
	{
		write(fd, &s[c], 1);
		c++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_lenstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	len;
	
    len = ft_lenstr(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < len)
		ft_putchar(base[nb]);
		
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}

}


int	print_format(char type, va_list args)
{
	if (type == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (type == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	
	else if (type == 'd' || type == 'i')
		ft_putnbr_fd(va_arg(args, int),1);

	else if (type == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	else if (type == 'X')
	    ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	
//	else if (type == 'p')
	    
	else if (type == '%')
		ft_putchar('%');

}

int	ft_printf(const char *format, ...)
{
	va_list		args; 
	int len;
	
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			len += print_format(*(++format),args);

		else
			len += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (len);
}

void main()
{
    char *ptr= "ola bro";
    
    ft_printf("o char é: %c\n", 'c');
    printf("o char é: %c\n", 'c');
    ft_printf("o nbr é: %i\n", 12345);
    printf("o nbr é: %i\n", 12345);
    ft_printf("o str é: %s\n", "oh baby a triple");
    printf("o str é: %s\n", "oh baby a triple");
    ft_printf("o nbr em hexa é: %x\n", 16345);
    printf("o nbr em hexa é: %x\n", 16345);
    ft_printf("o nbr em hexa é: %X\n", 16345);
    printf("o nbr em hexa é: %X\n", 16345);
    ft_printf("toma um %i %%\n", 100);
    printf("toma um %i %%\n", 100);
    printf("toma um %p\n", &ptr);
    
    
    
    
    
    
}
