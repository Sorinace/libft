/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	
	str = NULL;
	str = (char*) malloc (sizeof(*s1) + 1);
	if (str != NULL)
	{
		ft_strcpy(str, s1);
		return (str);
	}
	else
	{
		ft_putstr("ERROR: Storage space available is insufficient.");
		ft_putchar('\n');
		return NULL;
	}
}