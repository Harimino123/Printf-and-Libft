/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:54:28 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/08 10:24:12 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	if (len > ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str - start))
		len = ft_strlen(str + start);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i >= start && j < len)
			p[j++] = str[i];
		i++;
	}
	p[j] = '\0';
	return (p);
}
/*
int	main()
{
	#include <stdio.h>

	char	str[] = "";
	char	*result = ft_substr(str, 0, 0);
	
	printf("%s\n", result);
	return (0);
}*/
