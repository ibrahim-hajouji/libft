/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:47:34 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/13 16:09:32 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*ptr;

	ptr = NULL;
	result = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		ptr = f(lst -> content);
		node = ft_lstnew(ptr);
		if (!node)
		{
			del(ptr);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst -> next;
	}
	return (result);
}

void 	*f(void	*str)
{
	int	i = 0;
	while (((char *)str)[i])
	{
		if (((char *)str)[i] >= 97 && ((char *)str)[i] <= 122)
			((char *)str)[i] = ((char *)str)[i] - 32;
		else
			i++;
		i++;
	}
	return (str);
}

void	del(void *node)
{
	free(node);
}

/* int main()
{
	char s[10] = "hello";
	char s1[10] = "42";
	char s2[10] = "community";
	
	t_list *node = ft_lstnew(s);
	t_list *node1 = ft_lstnew(s1);
	t_list *node2 = ft_lstnew(s2);
	
	ft_lstadd_back(&node, node1);
	ft_lstadd_back(&node1, node2);
	
	t_list *new_list = ft_lstmap(node, f, del);
	while (new_list)
	{
		printf("%s\n", (char *)new_list -> content);
		new_list = new_list -> next;
	}
	
} */
