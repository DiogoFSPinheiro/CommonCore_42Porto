/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:16:41 by diogosan          #+#    #+#             */
/*   Updated: 2023/10/11 13:16:47 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <time.h>

void	*ft_calloc(size_t n, size_t size);
char	*ft_strdup(char *src);
void	ft_bzero(void *ptr, size_t n);
int		ft_atoi(const char *str);
char	*ft_strnstr(const char *big, const char *little, size_t t);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	ft_tolower(char c);
char	ft_toupper(char c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
int		ft_isprint(char c);
int		ft_isascii(int c);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);

#endif
