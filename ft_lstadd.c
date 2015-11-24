/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 07:32:59 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 07:46:51 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*nod;

	nod = NULL;
	nod = *alst;
	if (nod != NULL)
	{
		*alst = new;
		new->next = nod;
	}
}
