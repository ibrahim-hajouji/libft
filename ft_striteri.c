/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:33:57 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/16 08:55:44 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (!s || !f)
		return ;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
/*  void f(unsigned int index, char *character) {
    if (*character >= 'a' && *character <= 'z') {
        *character = *character - 'a' + 'A';
    }
}
 int main()
{
	unsigned int	index = 0;
	char	str[20] = "hello WORLD";
	while (str[index])
	{
		f(index, &str[index]);
		index++;
	}
	printf("%s\n", str);
}  */