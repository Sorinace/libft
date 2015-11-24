/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 08:02:34 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 08:04:30 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nod;

	nod = NULL;
	nod = (t_list*)malloc(sizeof(t_list));
	nod->content = malloc(content_size);
	if (nod != NULL)
	{
		if (content != NULL)
		{
			ft_memcpy(nod->content, content, content_size);
			nod->content_size = content_size;
		}
		else
		{
			nod->content = NULL;
			nod->content_size = 0;
		}
		nod->next = NULL;
		return (nod);
	}
	return (NULL);
}
