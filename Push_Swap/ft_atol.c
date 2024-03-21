/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:24:45 by diogosan          #+#    #+#             */
/*   Updated: 2023/10/11 11:24:48 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(const char *str)
{
	int	i;
	int	b;
	int	c;

	i = 0;
	b = 1;
	c = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			b *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		++i;
	}

	return (c * b);
}


