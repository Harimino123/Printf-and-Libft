/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 08:32:20 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/05 09:30:55 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;
	int	i;

	sign = 0;
	nbr = 0;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (!(sign % 2))
		return (nbr);
	return (-nbr);
}
/*
int	main()
{
	char	chaine[] = "-123abc";
	char	chain[] = "-123abc";
	int	dest;
	int	des;
	
	dest = ft_atoi(chaine);
	printf("%d\n", dest);
	des = atoi(chain);
	printf("%d\n", des);
}*/
