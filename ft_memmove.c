/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:51:09 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 13:51:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*de;
	char	*sr;
	char	*temp;
	size_t	i;

	de = (char*)dest;
	sr = (char*)src;
	temp = NULL;
	temp = (char*)malloc(n);
	i = 0;
	while (i < n)
	{
		temp[i] = sr[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		de[i] = temp[i];
		i++;
	}
	return (de);
}
