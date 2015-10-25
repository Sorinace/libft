/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:18:43 by savram            #+#    #+#             */
/*   Updated: 2015/10/25 19:19:31 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

/* typedef struct		s_area
{
	int 	x1;
	int		x2;
	int		y1;
	int		y2;
}					t_area; */

void	*ft_memset(void *s, int c, int n);
void	ft_bzero(void *S, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memccpy(void *dest, const void *src, int c, int n);
void	*ft_memmove(void *dest, const void *src, int n);
void	*ft_memchr(const void *s, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, int n);
int		ft_strlen(const char *s);

void	ft_putchar(char c);
void	ft_putstr(char const *s);

#endif