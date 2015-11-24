/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:43:10 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 14:43:50 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	const char	*last;

	str = s;
	last = NULL;
	while (str[0])
	{
		if (str[0] == (char)c)
			last = str;
		str++;
	}
	if (str[0] == (char)c)
		last = str;
	return ((char*)last);
}
