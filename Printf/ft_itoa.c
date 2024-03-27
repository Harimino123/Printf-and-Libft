/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:19:57 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/27 13:46:17 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_longueur(int n)
{
	int	ln;

	ln = 1;
	if (n < 0)
		ln++;
	while (n / 10 != 0)
	{
		n /= 10;
		ln++;
	}
	return (ln);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_longueur(n);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	p[len] = '\0';
	i = len - 1;
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	while (i >= 0 && p[i] != '-')
	{
		p[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (p);
}
