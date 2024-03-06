/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:28:09 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/06 09:35:41 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
void		ft_bzero(void *buff, size_t len);
void		*ft_memset(void *buff, int value, size_t len);
void		*ft_memcpy(void *str1, const void *str2, size_t numBytes);
void		*ft_memchr(const void *str, int c, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t n);
char    	*ft_strdup(const char *src);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
int			ft_atoi(const char *str);
int			ft_toupper(int chr);
int			ft_tolower(int chr);
int			ft_isalnum(char c);
int			ft_isalpha(char c);
int			ft_isascii(int c);
int			ft_isdigit(char c);

#endif
