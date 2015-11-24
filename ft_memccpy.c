/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:43:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 13:44:55 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*de;
	char	*sr;
	size_t	i;

	de = (char*)dest;
	sr = (char*)src;
	i = 0;
	while (i < n)
	{
		de[i] = sr[i];
		if (sr[i] == (char)c)
			return (&de[i + 1]);
		i++;
	}
	return (NULL);
}
