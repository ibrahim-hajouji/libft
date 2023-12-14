/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:15:52 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 12:39:26 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h> 
 */
int	ft_atoi(const char *str)
{
	int	number;
	int	parity;
	int	i;

	parity = 0;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			parity++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + str[i] - 48;
		i++;
	}
	if (parity)
		return (-number);
	else
		return (number);
}
/* int main()
{
	printf("%d\n", ft_atoi("42"));
	printf("%d", atoi("42"));
} */