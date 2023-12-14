/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:15:25 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 16:03:04 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while ((*lst))
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* void	del(void *c)
{
	t_list *tmp;
	
	tmp = ft_lstnew((t_list *)c);
	free(tmp);
}
int main()
{
	char *s = "42";
	char *s1 = "Network";
	t_list *str = ft_lstnew(s);
	t_list *str1 = ft_lstnew(s1);
	ft_lstadd_front(&str, str1);
	ft_lstclear(&str, del);
}*/