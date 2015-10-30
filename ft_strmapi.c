/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char *s, char(*f)(unsigned int, char))
{
	int     i;
	char    *str;
	
	str = NULL;
	str = (char*)malloc(sizeof(s) + 1);
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
	return (str);
}