/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:19:44 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/14 17:26:13 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/* int main ()
{
	int i = 0;
	char	*content = "42 Network";
	t_list *node = ft_lstnew(content);
	char 	*content2 = "1337";
	t_list *str = ft_lstnew(content2);
	ft_lstadd_front(&node, str);
	while (node)
	{
		printf("%s\n", (char *)node -> content);
		node = node -> next;
	}
} */