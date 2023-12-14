/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:39:54 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/12 18:45:10 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	delimiter_check(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static char	*allocation(char *str, char c, int index)
{
	char		*result;
	int			i;
	int			j;
	int			count;

	i = 0;
	count = 0;
	j = index;
	while (str[j] && !delimiter_check(str[j], c))
	{
		count++;
		j++;
	}
	result = malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	while (i < count)
	{
		result[i] = str[index];
		i++;
		index++;
	}
	result[i] = '\0';
	return (result);
}

static char	**clear_arr(char **result, int j)
{
	while (j)
	{
		j--;
		free(result[j]);
	}
	free (result);
	return (NULL);
}

static int	string_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && delimiter_check(str[i], c))
		i++;
	while (str[i])
	{
		count++;
		while (str[i] && !delimiter_check(str[i], c))
			i++;
		while (str[i] && delimiter_check(str[i], c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (string_count((char *)s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (!delimiter_check(s[i], c))
		{
			result[j] = allocation((char *)s, c, i);
			if (!result[j])
				return (clear_arr(result, j));
			while (s[i] && (!delimiter_check(s[i], c)))
				i++;
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

/* int main()
{
	
	int	i = 0;
	char	str[50] = "go,,,,,,cv, ";
	char c = 'g';
	char **result = ft_split(str, c);
	while(result[i])
	{
  		printf("%s\n", result[i]);
		i++;
	}
	printf("%d",string_count(str,c));
} */