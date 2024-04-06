/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:52:47 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/27 15:07:52 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_spec(char c, va_list args, size_t *printed_char)
{
	int	majuscule;
	
	if (c == 'c')
		*printed_char += ft_putchar(va_arg(args, int));
	else if (c == 's')
		*printed_char += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		*printed_char += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		*printed_char += ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
	{
		majuscule = (c == 'X');
		*printed_char += ft_dec_to_hex(va_arg(args, unsigned int), majuscule);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	printed_char;
	size_t	i;

	printed_char = 0;
	i = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			format_spec(format[i + 1], args, &printed_char);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			printed_char++;
		}
	i++;
	}
	va_end(args);
	return ((int)printed_char);
}
/*
#include <stdio.h>
#include <limits.h>

int	main()
{
	int re = ft_printf("%x\n", 1000);
	int ry = printf("%x\n", 1000);
	
	printf("re = %d and ry = %d", re, ry);
}*/
