/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:54:28 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/07 10:07:47 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = start - 1;
	j = 0;
	while (str[i] && j < len)
	{
		p[j] = str[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
/*
int	main()
{
	#include <stdio.h>

	char	str[] = "ABCDE";
	char	*result = ft_substr(str, 2, 3);
	
	printf("%s\n", result);
	return (0);
}*/
