/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
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