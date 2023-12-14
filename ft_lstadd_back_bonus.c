/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:49:39 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/10 22:50:18 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/* int main ()
{
	t_list *str = ft_lstnew("42");
	t_list *str1 = ft_lstnew("Network");
	t_list *str2 = ft_lstnew("1337");
	t_list *str3 = ft_lstnew("Med");
	t_list *str4 = ft_lstnew("School");
	ft_lstadd_back(&str, str1);
	ft_lstadd_back(&str1, str4);
	ft_lstadd_back(&str4, str2);
	ft_lstadd_back(&str2, str3);
	while (str)
	{
		printf("%s\n", (char *)str -> content);
		str = str -> next;
	}
} */