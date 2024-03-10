/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:52:23 by hrasolof          #+#    #+#             */
/*   Updated: 2024/02/28 09:33:06 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
/*
int  main()
{
  char  chaine[] = "Hello, orld!";
  char  char_search = 'w';

  
  printf("%s\n", strrchr(chaine, char_search));
  printf("%s\n", ft_strrchr(chaine, char_search));
}*/
