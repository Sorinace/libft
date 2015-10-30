/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_str(char c, int i, int n, int divid)
{
	char	*str;
	
	str = NULL;
	str = (char*) malloc (i + 1);
	if (str != NULL)
	{
		i = 0;
		if (c == '-')
		{
			str[i] = c;
			i++;
		}
		while (n > 0)
		{
			str[i] = '0' + n / divid;
			n = n % divid;
			divid = divid / 10;
			i++;
		}
		str[i] = '\0';
	}
	return (str);	
}

char	*ft_itoa(int n)
{
	char	c;
	int		divid;
	int		i;

	i = 0;
	c = '+';
	if (n < 0)
	{
		c = '-';
		n = -1 * n;
		i++;
	}
	divid = 1;
	while (n > divid * 10)
	{
		divid = divid * 10;
		i++;	
	}
	return (ft_itoa_str(c, i, n, divid));
}