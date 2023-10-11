/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:32:21 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 12:35:10 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
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
