/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:44:36 by savram            #+#    #+#             */
/*   Updated: 2015/12/14 18:13:43 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int		ft_count(char *s, char c)
{
	int			nr;
	int			i;

	nr = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			nr++;
		i++;
	}
	return (nr);
}

static	void	ft_out_ends(char *s, char c)
{
	int			i;

	i = 0;
	if (s[i] == c)
	{
		while (s[i])
		{
			s[i] = s[i + 1];
			i++;
		}
		s[i] = '\0';
	}
	i = 0;
	while (s[i + 1])
		i++;
	if (s[i] == c)
		s[i] = '\0';
}

static void		ft_clean(char *s, char c, int *nr)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] == c)
			j++;
		if (j > 1)
		{
			k = 0;
			while (s[i + j + k])
			{
				s[i + k + 1] = s[i + j + k];
				k++;
			}
			s[i + k + 1] = '\0';
		}
		i++;
	}
	s[i] = '\0';
	ft_out_ends(s, c);
	*nr = ft_count(s, c);
}

static void		ft_split_words(char **sp, char *s, char c)
{
	int			i;
	int			start;
	int			nr_words;

	i = 0;
	start = 0;
	nr_words = 0;
	while (s[i])
	{
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			sp[nr_words] = ft_strsub(s, start, i - start);
			nr_words++;
			start = i + 1;
		}
	}
	sp[nr_words] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	int			nr_words;
	char		**split;
	char		*str;

	if (s == NULL)
		return (NULL);
	nr_words = 0;
	str = NULL;
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str)
		ft_strcpy(str, s);
	ft_clean(str, c, &nr_words);
	split = NULL;
	split = (char**)malloc(sizeof(char*) * (nr_words + 2));
	if (split)
		ft_split_words(split, str, c);
	return (split);
}
