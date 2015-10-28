/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*first;
	int			i;

	first = haystack;
	while (first[0])
	{
		 if (first[0] == needle[0])
		 {
		 	i = 0;
		 	while (first[i] == needle[i] && needle[i])
		 		i++;
		 	if (!needle[i])
		 		return ((char*)first);
		 }
		 first++;
	}
	return (NULL);
}