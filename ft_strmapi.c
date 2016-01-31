/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:33:41 by savram            #+#    #+#             */
/*   Updated: 2015/12/02 18:03:37 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
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
				str[i] = f(i, s[i]);
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
