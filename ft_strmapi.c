/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:41:57 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/16 08:55:29 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	index = 0;
	if (!s || !f)
		return (NULL);
	result = (char *)malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[index])
	{
		result[index] = f(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
/* char	f(unsigned int	index, char	c)
{
		return (c + index);
}

int main()
{

    unsigned int index = 0;
    char result[10];
    char s[10] = "1234";
    while (s[index])
    {
        result[index] = f(index, s[index]);
        index++;
    }
    result[index] = '\0';
    printf("%s\n", result);
} */