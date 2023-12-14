/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:31:52 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/09 12:59:41 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	d;

	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		d = n % 10 + '0';
		write (fd, &d, 1);
	}
	else if (n >= 0 && n <= 9)
	{
		d = n + '0';
		write(fd, &d, 1);
	}
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
}

/* int main()
{
	ft_putnbr_fd(125, 1);
} */