/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:12:59 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/26 14:17:17 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_int(int n)
{
	char	*num_str;
	size_t	len;

	num_str = ft_itoa(n);
	if (!num_str)
		return 0;
	len = ft_putstr(num_str);
	free(num_str);
	return len;
}
