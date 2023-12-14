/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:33:35 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/12 17:31:39 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}

/* int main ()
{
	char dst[25];
	char src[25] = "hello";
	char dest[25] = "world";
	size_t len = 9; 
	printf("%s\n", ft_memmove(dest,src,len));
	printf("%s", memmove(dest,src,len));
} */
