/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:55:14 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 11:28:14 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  #include <stdio.h>
#include <string.h> */

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == ((char)c))
			return ((char *)s + i);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

/* int main ()
{
	char s[25] = "he0l0lo";
	int	c = 48;
	printf("%s\n", ft_strrchr(s,c));
	printf("%s", strrchr(s,c));
}  */