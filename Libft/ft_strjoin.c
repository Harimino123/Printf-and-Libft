/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.your42network>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:31:16 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/11 09:01:00 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *dest, char const *src)
{
	char			*p;
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	p = (char *)malloc(sizeof(char) * (src_len + dest_len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < dest_len)
	{
		p[i] = dest[i];
		i++;
	}
	i = 0;
	while (i < src_len)
	{
		p[dest_len + i] = src[i];
		i++;
	}
	p[src_len + dest_len] = '\0';
	return (p);
}
/*
int	main()
{
#include <stdio.h>
	char	sr1[] = "Hello ";
	char	sr2[] = "World";

	printf("%s\n", ft_strjoin(sr1,sr2));
}*/
