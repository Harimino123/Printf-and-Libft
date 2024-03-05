/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:28:59 by hrasolof          #+#    #+#             */
/*   Updated: 2024/02/28 08:47:05 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		chr -= 32;
	return (chr);
}

/*int	main()
{
	printf("%c",ft_toupper('g'));
}*/
