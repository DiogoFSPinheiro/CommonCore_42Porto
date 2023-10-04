/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:32:21 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 12:35:10 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] < 'a' || str[c] > 'z') && (str[c] < 'A' || str[c] > 'Z'))
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
	char str[] = "oapPs";
	char err[] = "ola 2 peps";

	output = ft_str_is_alpha( str);
	printf("%d\n%d", output ,ft_str_is_alpha( err));
	
	
	
}
*/
