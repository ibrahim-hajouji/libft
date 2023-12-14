/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:06:25 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 14:49:58 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	x = (t_list *)malloc(sizeof(t_list));
	if (!x)
		return (NULL);
	x -> content = content;
	x -> next = NULL;
	return (x);
}
/* int main ()
{
	char	*content = "42 Network";
	t_list *node = ft_lstnew(content);
	 
	printf("%s\n", node -> content);
	printf("%p\n", node -> next);
} */