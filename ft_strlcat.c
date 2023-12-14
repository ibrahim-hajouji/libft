/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:39:46 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 19:19:36 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;
	size_t	j;
	size_t	total;

	j = ft_strlen(dst);
	i = ft_strlen(src);
	n = 0;
	total = i + j;
	if (j >= dstsize)
		return (dstsize + i); 
	while (src[n] && j < (dstsize - 1))
	{
		dst[j] = src[n];
		j++;
		n++;
	}
	dst[j] = '\0';
	return (total);
} 
/* int main()
{
	char	dst[12] = "hello, ";
	char	dest[12] = "hello, ";
	char	src[45] = "hru?";
	size_t	dstsize = 10;
	printf("this is my funct : %lu\n", ft_strlcat(dst, src, dstsize));
	printf("this is the libs funct : %lu\n", strlcat(dest, src, dstsize));
	printf("this is my cat : %s\n",dst);
	printf("this is the libc cat : %s", dest);
} */