/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:27:41 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 13:28:09 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int		i;
	int		nr;

	i = 0;
	nr = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nr = nr * 10 + (nptr[i] - '0');
		i++;
	}
	return (nr);
}
