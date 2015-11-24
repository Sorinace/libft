/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 07:55:53 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 07:57:28 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*nod;

	nod = NULL;
	nod = lst;
	if (nod != NULL)
	{
		while (nod)
		{
			(*f)(nod);
			nod = nod->next;
		}
	}
}
