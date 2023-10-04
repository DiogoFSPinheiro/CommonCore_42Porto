/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:40:08 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 14:40:12 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < '0' || str[c] > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*
int main()
{
	int	output;
	char str[] = "123";
	char err[] = "ola 2 peps";
	output = ft_str_is_numeric( str);
	printf("%d\n%d", output ,ft_str_is_numeric( err));
	
	
	
}
*/
