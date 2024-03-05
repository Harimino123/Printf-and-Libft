/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:10:50 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/02 14:33:37 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned char	*bi;
	unsigned char	*li;

	if (*little == '\0')
		return ((char *)big);
	while (*big && n > 0)
	{
		bi = (unsigned char *)big;
		li = (unsigned char *)little;
		while (*bi == *li && *li != '\0')
		{
			bi++;
			li++;
		}
		if (*li == '\0')
			return ((char *)big);
		big++;
		n--;
	}
	return (0);
}
