/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:47:25 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/16 08:10:35 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/* int main()
{
    char *s1 = "First";
    char *s2 = "Second";
    char *s3 = "Third";

    t_list *node1 = ft_lstnew(s1);
    t_list *node2 = ft_lstnew(s2);
    t_list *node3 = ft_lstnew(s3);

    node1->next = node2;
    node2->next = node3;
	t_list *last_node = ft_lstlast(node1);
	printf("%s", (char *)last_node -> content);
} */