/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	char	*de;
	char	*sr;
	int		i;
	
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