/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:42:16 by mmonereo          #+#    #+#             */
/*   Updated: 2020/10/27 16:21:26 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_freetab(char **tab)
{
	size_t i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t	ft_wordc(char const *s, char c)
{
	size_t wcount;
	size_t i;

	wcount = 0;
	i = 0;
	while (s[i] == c || s[i] != 0)
	{
		i++;
		while (s[i] != c && s[i] != 0)
		{
			wcount++;
			while (s[i] != 0 && s[i] != c)
			{
				++i;
			}
		}
	}
	return (wcount);
}

static size_t	ft_wlen(const char *s, char c, size_t *j)
{
	size_t wlen;

	wlen = 0;
	if (s[0] != c && *j == 0)
	{
		while (s[0 + wlen] != 0 && s[0 + wlen] != c)
		{
			++wlen;
		}
	}
	while (s[(*j)] == c)
	{
		*j += 1;
		while (s[(*j) + wlen] != 0 && s[(*j) + wlen] != c)
		{
			++wlen;
		}
	}
	return (wlen);
}

char			**ft_split(char const *s, char c)
{
	char	**newarr;
	size_t	j;
	size_t	i;
	size_t	len;
	size_t	wcount;

	len = 0;
	i = 0;
	j = 0;
	if (s && *s)
	{
		wcount = ft_wordc(s, c);
	}
	else
	{
		wcount = 0;
	}
	if (!(newarr = (char **)malloc(sizeof(char *) * wcount + 1)))
	{
		return (NULL);
	}
	while (s[j] != 0 && wcount--)
	{
		len = ft_wlen(s, c, &j);
		if (!(newarr[i] = ft_substr(s, j, len)))
		{
			return (ft_freetab(newarr));
		}
		j = j + len;
		i++;
	}
	newarr[i] = 0;
	return (&newarr[0]);
}
