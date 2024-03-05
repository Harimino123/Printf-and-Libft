/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:33:39 by hrasolof          #+#    #+#             */
/*   Updated: 2024/02/29 08:37:14 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0 && (*str1 != '\0' || *str2 != '\0'))
	{
		if (*str1 > *str2)
		{
			return (1);
		}
		else if (*str1 < *str2)
		{
			return (-1);
		}
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (0);
}
/*
int	main()
{
	char	s1[] = "Hello";
	char	s2[] = "helLO";
	int	cmp = ft_strncmp(s1, s2, 3);
	
	if (cmp > 0)
		{
			printf("upper s1");
		}
	else if (cmp == 0)
		{
			printf("s1 = s2");
		}
	else
		printf("lower s1");
}*/
