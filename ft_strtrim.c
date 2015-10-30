/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		temp;
	char	*str;
	
	str = NULL;
	str = (char*) malloc (sizeof(s) + 1);
	if (str != NULL)
	{
		i = 0;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
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