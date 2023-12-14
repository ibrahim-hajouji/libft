/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:48:03 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/04 15:34:13 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <string.h>
#include <ctype.h> */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) 
		|| ((c >= 65 && c <= 90) 
			|| (c >= 97 && c <= 122)))
		return (1);
	return (0);
}
/* int main(void)
{
    int d;

    d = 48;
    printf("%d", ft_isalnum(d));
    printf("%d", isalnum(d));
} */