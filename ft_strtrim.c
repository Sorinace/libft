/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:49:45 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 15:04:09 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_number(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		temp;
	char	*str;

	str = NULL;
	str = (char*)malloc(sizeof(s) + 1);
	if (str != NULL)
	{
		i = ft_number(s);
		temp = i;
		while (s[i])
		{
			str[i - temp] = s[i];
			i++;
		}
		str[i] = '\0';
		i--;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			str[i - temp] = '\0';
			i--;
		}
	}
	return (str);
}
