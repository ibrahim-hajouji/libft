/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:12:40 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 14:11:48 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	j = ft_strlen(src);
	return (j);
}
/*int main ()
{
	char	dest[25] = "test";
	char	dst[25] = "test";
	char	src[45] = "hello";
	size_t dstsize = 5;
	printf("this is my funct  :  %lu\n",ft_strlcpy(dest,src,dstsize));
	printf("this is the libc funct  :  %lu\n",strlcpy(dst,src,dstsize));
	printf("this is my cpy  :  %s\n", dest);
	printf("this is the libc cpy  : %s", dst);
}*/