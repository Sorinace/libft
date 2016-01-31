/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:20:09 by savram            #+#    #+#             */
/*   Updated: 2015/12/02 17:59:30 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strequ(const char *s1, const char *s2)
{
	int		i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (s1[i] && s2[i])
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
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
