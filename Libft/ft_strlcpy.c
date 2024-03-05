/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:37:26 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/02 15:17:29 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size != 0 && size <= ft_strlen(src))
	{
		ft_memcpy(dst, src, size - 1);
		dst[size] = '\0';
	}
	else if (size != 0)
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	return (ft_strlen(src));
}
/*
int	main()
{
	char	src[] = "lorem ipsum";
	char	dest[15];
	
	ft_strlcpy(dest, src, 3);
	printf("%s\n", dest);
}*/
