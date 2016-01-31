/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:51:09 by savram            #+#    #+#             */
/*   Updated: 2015/10/31 13:51:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
    unsigned char	tmp[n];
    
    ft_memcpy(tmp, s2, n);
    ft_memcpy(s1, tmp, n);
    return (s1);
}