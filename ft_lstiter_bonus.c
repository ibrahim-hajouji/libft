/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:26:01 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/16 08:54:30 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
/* void	f(void *c)
{
	t_list *tmp;
	
	tmp = ft_lstnew((t_list *)c);
	printf("%s\n",tmp->content);
}
int main()
{
	char *s = "42";
	t_list *str = ft_lstnew(s);
	char *s1 = "43";
	t_list *str1 = ft_lstnew(s1);
	ft_lstadd_back(&str, str1);
	char *s2 = "44";
	t_list *str2 = ft_lstnew(s2);
	ft_lstadd_back(&str1, str2);
	ft_lstiter(str, f);
} */