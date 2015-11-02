/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	divid;

	if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
	}
	divid = 1;
	while (n >= divid * 10)
		divid = divid * 10;
	while (divid > 0)
	{
		ft_putchar('0' + n / divid);
		n = n % divid;
		divid = divid / 10;
	}
}