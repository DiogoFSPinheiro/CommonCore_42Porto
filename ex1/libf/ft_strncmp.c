/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:23:05 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/03 12:23:24 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;

	c = 0;
	while (c < n && (s1[c] || s2[c]))
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
/*
int	main()
{
	unsigned int	n = 5;
	

	printf("%d", ft_strncmp("vola", "ola jovem", n));
	printf("\n%d", ft_strncmp("Hello", "Ve", n));
	printf("\n%d", ft_strncmp("hello", "hello", n));
}
*/
