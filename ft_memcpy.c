/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:56:10 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 10:58:35 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */ 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *) src)[i];
		i++;
	}
	return (dst); 
}

/* int main()
{
	char dest[25];
	char src[25] = "hello";
	char dst[25];
	size_t len = 14;
	printf("%s\n", ft_memcpy(dest,src,len));
	printf("%s", memcpy(dst,src,len));
} */