/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:35:45 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 19:35:48 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src [c] != '\0' && c < size - 1)
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (c);
}
/*
int  main()
{

	char	src[5] = "that";
	char	dest[20] = "this and ";
  	
  	
  	printf("%d", ft_strlcat(dest, src, 5));
  	//printf("%d", strlcat(dest, src, 5));
}
*/
