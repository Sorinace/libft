/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:27:41 by savram            #+#    #+#             */
/*   Updated: 2015/12/14 18:35:02 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	c_is_space(char c)
{
	if (c == ' '
	|| c == '\n'
	|| c == '\v'
	|| c == '\t'
	|| c == '\r'
	|| c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int		i;
	int		nr;
	int		sign;

	i = 0;
	nr = 0;
	sign = 1;
	while (c_is_space(nptr[i]))
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+') && (nptr[i + 1] == '-' 
		|| nptr[i + 1] == '+'))
		return (0);
	if (nptr[i] == '+')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nr = nr * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * nr);
}
