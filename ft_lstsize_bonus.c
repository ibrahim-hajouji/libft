/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:26:04 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/16 09:24:55 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/* int main()
{
	int i = 0;
	char	*content = "42 Network";
	t_list *node = ft_lstnew(content);
	char 	*content2 = "1337";
	t_list *str = ft_lstnew(content2);
	ft_lstadd_front(&node, str);
	printf("%d\n", ft_lstsize(node));
} */