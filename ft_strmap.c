/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:31:28 by savram            #+#    #+#             */
/*   Updated: 2015/12/02 18:03:06 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	int		i;
	char	*str;

	str = NULL;
	if (s != NULL && f != NULL)
	{
		str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str != NULL)
		{
			i = 0;
			while (s[i])
			{
				str[i] = f(s[i]);
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
