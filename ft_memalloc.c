/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:42:08 by savram            #+#    #+#             */
/*   Updated: 2016/01/04 15:32:12 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = NULL;
	str = (char*)malloc(size);
	if (str != NULL)
		ft_memset(str, '\0', size);
	return (str);
}
