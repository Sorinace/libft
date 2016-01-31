/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:00:12 by savram            #+#    #+#             */
/*   Updated: 2016/01/04 15:53:51 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	divid;
	long int	nu;

	nu = n;
	if (nu < 0)
	{
		ft_putchar_fd('-', fd);
		nu = -1 * nu;
	}
	divid = 1;
	while (nu >= divid * 10)
		divid = divid * 10;
	while (divid > 0)
	{
		ft_putchar_fd('0' + nu / divid, fd);
		nu = nu % divid;
		divid = divid / 10;
	}
}
