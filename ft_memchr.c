/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:45:28 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 13:46:12 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sir;
	size_t	i;

	sir = (char*)s;
	i = 0;
	while (i < n)
	{
		if (sir[i] == (char)c)
			return (&sir[i]);
		i++;
	}
	return (NULL);
}
