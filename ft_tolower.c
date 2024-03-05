/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:34:06 by hrasolof          #+#    #+#             */
/*   Updated: 2024/02/28 08:47:42 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		chr += 32;
	return (chr);
}
/*
int	main()
{
	printf("%c", ft_tolower('F'));
}*/
