/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 07:53:56 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 07:59:25 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nod;

	nod = NULL;
	nod = alst[0];
	if (nod != NULL)
	{
		(*del)(nod->content, nod->content_size);
		free(nod);
		alst[0] = NULL;
	}
}
