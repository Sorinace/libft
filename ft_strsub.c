/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	
	str = NULL;
	str = (char*) malloc (len +1);
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
	return (str);
}