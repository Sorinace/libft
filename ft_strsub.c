/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:48:04 by savram            #+#    #+#             */
/*   Updated: 2015/12/02 18:06:56 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		str = (char*)malloc(len + 1);
		if (str != NULL)
		{
			i = 0;
			while (i < len)
			{
				str[i] = s[i + start];
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
