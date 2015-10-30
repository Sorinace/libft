/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_str_nr(char const *s, char c)
{
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	return (j);
}

char	*ft_str_new(char const *s, int *start, int i, int *nr)
{
	char	*str;
	
	if((i - *start) > 0)
	{
		str = ft_strsub(s, *start, i - *start);
		*nr = *nr + 1;
	}
	*start = i + 1; 
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	int		nr;
	char	**arr;

	arr = NULL;
	arr = (char**) malloc (sizeof(char*)*ft_str_nr(s, c) + 2);
	if (arr != NULL)
	{
		i = 0;
		nr = 0;
		start = 0;
		while (s[i])
		{
			if (s[i] == c)
				arr[nr] = ft_str_new(s, &start, i, &nr);
			i++;
		}
		if((i - start) > 0)
			arr[nr] = ft_str_new(s, &start, i, &nr);
		arr[nr] = '\0';
	}
	return (arr);
}