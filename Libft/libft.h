/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:28:09 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/10 18:17:33 by hari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
//#include <stdio.h>
//# include <string.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
void		*ft_calloc(size_t n_block, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		ft_bzero(void *buff, size_t len);
void		*ft_memset(void *buff, int value, size_t len);
void		*ft_memcpy(void *str1, const void *str2, size_t numBytes);
void		*ft_memchr(const void *str, int c, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strjoin(char const *dest, char const *src);
char		*ft_strnstr(const char *big, const char *little, size_t n);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strdup(const char *src);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
int			ft_atoi(const char *str);
int			ft_isprint(int c);
int			ft_toupper(int chr);
int			ft_tolower(int chr);
int			ft_isalnum(char c);
int			ft_isalpha(char c);
int			ft_isascii(int c);
int			ft_isdigit(char c);

#endif
