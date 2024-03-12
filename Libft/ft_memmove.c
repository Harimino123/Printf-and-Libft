/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:41:54 by hrasolof          #+#    #+#             */
/*   Updated: 2024/03/12 11:52:47 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (a < b)
	{
		while (n-- > 0)
		{
			*a++ = *b++;
		}
	}
	else if (a > b)
	{
		a += n;
		b += n;
		while (n-- > 0)
		{
			*(--a) = *(--b);
		}
	}
	return (dest);
}
/*
int main() {
  char str1[] = "Hello,World";

  printf("dest = %s\n", str1);
  printf("dest after memcpy = %s\n", (char *)ft_memcpy(str1 + 3, str1, 11));
  

  char src[] = "Hello,World";

  printf("dest = %s\n", src);
  //printf("dest after memmove = %s\n", (char *)ft_memmove(src + 3, src, 9));
  printf("dest after memmove = %s\n", (char *)memmove(src + 3, src, 9));

  return 0;
}*/
