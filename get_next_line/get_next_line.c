/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:28:18 by diogosan          #+#    #+#             */
/*   Updated: 2023/11/29 10:28:36 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char	*read_file(int fd, char *stack)
{
	char	*buffer;
	int		fim;
	
	if (!stack)
		stack = ft_calloc(1, 1);
	buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	fim = 1;
	while (fim != 0)
	{
		fim = read(fd, stack, BUFFER_SIZE);
		if (fim == -1)
			break ;
		buffer[fim] = '\0';
		stack = str_join(stack, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (!*stack || fim == -1)
        	return (free(stack), NULL);
	return (stack);
}

char	*polish(char *stack)
{
	int		c;
	int		i;
	char	*temp;

	c = 0;
	while (stack[c] && stack[c] != '\n')
		c++;
	if (!stack[c])
		return (free(stack), NULL);
	temp = calloc(sizeof(char), (str_len(stack) - c + 1));
	i = 0;
	while (stack[c + i])
	{
		temp[i] = stack[c + i];
		i++;
	}
	temp[i] = '\0';
	free(stack);
	return (temp);
}

char	*get_end_line(char *stack)
{
	int		c;
	int		i;
	char	*linha;
	
	c = 0;
	while (stack[c] && stack[c] != '\n')
		c++;
	i = 0;
	linha = calloc(sizeof(char), (c + 1));
	while (c >= i)
	{
		temp[i] = stack[i];
		i++;
	}
	linha[i] = '\0';
	return (linha);
}

char	*get_next_line(int fd)
{
	static char	*stack;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stack = read_file(fd, stack); // vai ler até encontrar o "\n"
	if (!stack)
		return (NULL);
	line = get_end_line(stack); // vai retirar a linha do stack
	stack = polish(stack); // vai deixar apenas o que esta no stack depois do '\n'
	return (line);
}
/*
int	main(void)
{

	int	fd;
	char	*cunt;
 	int i = 0;


	fd = open("get_next_line.c", O_RDONLY);
	while ((cunt = get_next_line(fd)))
	{

		printf("%s", cunt);
		free(cunt);
	}
}

*/
