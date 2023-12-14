/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:54:27 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 12:33:35 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */
static int	number_len(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		length = 1;
	if (n < 0)
		length++;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	length++;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;	

	len = number_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result [0] = '-';
		n *= -1;
	}
	result[len - 1] = '\0';
	while (n != 0)
	{
		len--;
		result[len - 1] = n % 10 + 48;
		n /= 10;
	}
	return (result);
}
/* int main()
{
	printf("%s\n", ft_itoa(42));
} */
