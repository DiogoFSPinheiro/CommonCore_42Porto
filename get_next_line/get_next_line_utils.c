/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:58:56 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/29 11:58:58 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

int	str_len(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;
	int		t;

	t = n * size;
	mem = malloc(t);
	if (!mem)
		return (NULL);
	ft_bzero(mem, t);
	return (mem);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == 0)
		return ((char *)str);
	return (NULL);
}

char	*str_join(char *stack, char *buffer)
{
	char	*join;
	int		c;
	int		i;

	if (!stack || !buffer)
		return (NULL);
	join = calloc(sizeof(char), (str_len(stack) + str_len(buffer) + 1));
	c = 0;
	i = 0;
	while (stack[c])
	{
		join[c] = stack[c];
		c++;
	}
	while (buffer[i])
	{
		join[c] = buffer[i];
		c++;
		i++;
	}
	join[c] = '\0';
	free(stack);
	return (join);
}
