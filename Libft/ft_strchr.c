/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:37:36 by hrasolof          #+#    #+#             */
/*   Updated: 2024/02/28 09:23:10 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (0);
	return ((char *)(str + i));
}
/*
int  main()
{
  char  chaine[] = "Hello, World!";
  char  char_search = 'W';

  
  printf("%s\n", strchr(chaine, char_search));
  printf("%s\n", ft_strchr(chaine, char_search));
}*/
