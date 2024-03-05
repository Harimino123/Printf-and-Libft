/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:00:39 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/02 14:37:40 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buff, int value, size_t len)
{
	unsigned char	*i;

	i = buff;
	while (len--)
	{
		*i++ = value;
	}
	return (buff);
}

/*int	main(void)
{
	char buf[0xff];
	
	ft_memset(buf, 0, 0xff);
	ft_memset(buf, 'Z', 10);
	ft_memset(buf + 10, 'A', 10);
	
	printf("%s\n", buf);
	return (0);
}*/
