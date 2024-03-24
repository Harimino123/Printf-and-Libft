/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hari <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:01:33 by hari              #+#    #+#             */
/*   Updated: 2024/03/24 16:42:25 by hari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_spec(char c, va_list args, size_t *printed_char)
{
	if (c == 'c')
		*printed_char += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		*printed_char += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'd')
		*printed_char += ft_putnbr_fd(va_arg(args, int), 1);
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
		return (0);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			printed_char++;
		}
		else
		{
			format_spec(format[i + 1], args, &printed_char);
			i++;
		}
	i++;
	}
	va_end(args);
	return ((int)printed_char);
}

#include <stdio.h>

int	main()
{
	ft_printf("Bonjour, %c !\n", 'W');
	printf("Bonjour, %c !\n", 'W');
	ft_printf("Bonjour, l'%s !\n", "ami");
	printf("Bonjour, l'%s !\n", "ami"); 
	ft_printf("Nombre = %d !\n", 10);
	printf("Nombre = %d !\n", 10);	
}
