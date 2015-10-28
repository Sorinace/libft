/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t		y;

	y = 0;
	if (ft_strcmp(little, "") == 0)
		return ((char*)big);
	while (big[y] && y < len)
	{
		 if (big[y] == little[0])
		 {
		 	i = 0;
		 	while (big[y + i] == little[i] && little[i] && (y + i) < len)
		 		i++;
		 	if (!little[i])
		 		return ((char*)big + y);
		 }
		 y++;
	}
	return (NULL);
}