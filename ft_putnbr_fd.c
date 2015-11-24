/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:00:12 by savram            #+#    #+#             */
/*   Updated: 2015/11/07 08:27:13 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	divid;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -1 * n;
	}
	divid = 1;
	while (n >= divid * 10)
		divid = divid * 10;
	while (divid > 0)
	{
		ft_putchar_fd('0' + n / divid, fd);
		n = n % divid;
		divid = divid / 10;
	}
}
