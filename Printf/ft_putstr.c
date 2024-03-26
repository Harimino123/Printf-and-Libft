/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:46:12 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/24 15:14:58 by hari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	if(!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(str && str[i])
		ft_putchar(str[i++]);
	return (i);
}
