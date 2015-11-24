/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:11:50 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 14:12:08 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	const char	*first;

	first = s;
	while (first[0])
	{
		if (first[0] == (char)c)
			return ((char*)first);
		first++;
	}
	if (first[0] == (char)c)
		return ((char*)first);
	return (NULL);
}
