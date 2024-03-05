/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:37:42 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/02 10:31:12 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *)str)[i] != '\0')
	{
		if (((char *)str)[i] == c)
			return ((char *)(void *)(str + i));
		else
			i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "How many time do you want to learn this?";
	char	search = 'z';

	printf("%s\n", (char *)ft_memchr(str, search, 100));
	printf("%s\n", (char *)memchr(str, search, 100));

}*/
