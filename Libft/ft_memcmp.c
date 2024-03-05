/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:41:33 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/02 14:30:15 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str1[] = {'a', 'b'};
	char	str2[] = {'A','B'};
	

	int	f_result = ft_memcmp(str1, str2, 6);

	if (f_result > 0)
		printf("S1 is upper\n");
	else if (f_result == 0)
		printf("S1 & S2 is equal\n");
	else
		printf("S1 is lower\n");

	int result = memcmp(str1, str2, 2);

	if (result > 0)
        printf("S1 is upper\n");
    else if (result == 0)
        printf("S1 & S2 is equal\n");
    else
        printf("S1 is lower\n");
}*/
