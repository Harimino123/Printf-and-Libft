/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:01:10 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/06 09:32:56 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (p == NULL)
	{
		return (NULL);
	}
	if (p != NULL)
	{
		ft_strcpy(p, src);
	}
	return (p);
}
/*
int	main(void)
{
	char	src[] = "Hello";	

	printf("%s\n", ft_strdup(src));
}*/
