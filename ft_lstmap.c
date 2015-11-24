/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 08:00:45 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 08:01:55 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nod;
	t_list	*n_list;
	t_list	*n_nod;

	nod = NULL;
	n_nod = NULL;
	n_list = n_nod;
	nod = lst;
	while (nod != NULL)
	{
		if (n_nod == NULL)
		{
			n_nod = (*f)(ft_lstnew(nod->content, nod->content_size));
			n_list = n_nod;
		}
		else
		{
			n_nod->next = (*f)(ft_lstnew(nod->content, nod->content_size));
			n_nod = n_nod->next;
		}
		nod = nod->next;
	}
	return (n_list);
}
