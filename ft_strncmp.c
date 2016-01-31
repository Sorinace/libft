/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:36:10 by savram            #+#    #+#             */
/*   Updated: 2015/12/14 18:49:04 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' && s2[i] == '\0' && i < n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
