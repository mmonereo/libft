/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:46:03 by mmonereo          #+#    #+#             */
/*   Updated: 2020/09/21 17:44:20 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_inset(char c, char const *set)
{
	if (ft_strchr(set, c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*new;

	len = ft_strlen(s1);
	i = 0;
	while (ft_inset(s1[len - 1], set) == 1)
	{
		len--;
	}
	while (ft_inset(s1[i], set) == 1)
	{
		i++;
		len--;
	}
	if (len < 0)
	{
		len = 0;
	}
	new = ft_substr(s1, i, len);
	new[len] = 0;
	return (new);
}
