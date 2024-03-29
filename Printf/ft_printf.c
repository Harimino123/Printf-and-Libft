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
	if (c == 'c')
		*printed_char += ft_putchar(va_arg(args, int));
	else if (c == 's')
		*printed_char += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		*printed_char += ft_putnbr(va_arg(args, int));
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

int	main()
{ 
	int	re;
	int i;
	re = ft_printf("Nombre = %d !\n", 42);
	i = printf("Nombre = %d !\n", 42);
	printf("%d\n", i);	
	printf("%d\n", re);

}*/
