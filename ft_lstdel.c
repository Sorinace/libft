/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 07:36:23 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 07:59:55 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nod;

	while (*alst)
	{
		nod = NULL;
		nod = *alst;
		if (nod != NULL)
		{
			(*del)(nod->content, nod->content_size);
			free(nod);
			*alst = alst[0]->next;
		}
	}
	*alst = NULL;
}
