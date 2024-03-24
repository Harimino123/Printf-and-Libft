/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hari <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:04:45 by hari              #+#    #+#             */
/*   Updated: 2024/03/24 16:39:43 by hari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *format, ...);
size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
