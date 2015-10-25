/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, int n)
{
	char	*de;
	char	*sr;
	char	*temp;
	int		i;
	
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