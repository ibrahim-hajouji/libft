/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:15:22 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 15:53:40 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(*del)(lst -> content);
	free(lst);
}
/* void	del(void *c)
{
	t_list *tmp;

	tmp = ft_lstnew((t_list *)c);
	free (tmp);
}
int main()
{
	char *s = "42";
	t_list *str = ft_lstnew(s);
	ft_lstdelone(str, del);
} */
