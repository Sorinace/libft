/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:37:50 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 14:38:29 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (i == 0)
	{
		if (s1[i] != '\0' || s2[i] != '\0')
			return (0);
	}
	if (i == n)
		return (1);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else
		return (0);
}
