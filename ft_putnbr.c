/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:01:08 by savram            #+#    #+#             */
/*   Updated: 2016/01/04 15:34:24 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	divid;
	long int	nu;

	nu = n;
	if (nu < 0)
	{
		ft_putchar('-');
		nu = -1 * nu;
	}
	divid = 1;
	while (nu >= divid * 10)
		divid = divid * 10;
	while (divid > 0)
	{
		ft_putchar('0' + nu / divid);
		nu = nu % divid;
		divid = divid / 10;
	}
}
