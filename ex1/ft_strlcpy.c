/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:35:45 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 19:35:48 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (src[c] != '\0')
	{
		while (src [c] != '\0' && c < size - 1)
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
		while (src[c])
		{
			c++;
		}
	}
	return (c);
}
/*
int	main()
{
	char	src[]="fck arround"; // 11 chars
	char	dest[4];
	int	n;
	
	n = sizeof(dest);
	printf("%s\n", src);
	ft_strlcpy(dest, src, n);
	printf("%s\n", dest);
	printf("%d", ft_strlcpy(dest, src, n));
}
*/
