/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:32:06 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 14:36:14 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdlib.h>
#include <stdio.h> */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (size * count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

/* int main()
{
	int* numbers = ft_calloc(10, sizeof(int));
	int	i = 0;
	
	if (numbers == NULL) {
    printf("Error: Memory allocation failed!\n");
    return 1;
  }

	while (i < 10)
	{
    	printf("numbers[%d] = %d\n", i, numbers[i]);
		i++;
	}
} */