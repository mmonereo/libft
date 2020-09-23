/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:04:15 by mmonereo          #+#    #+#             */
/*   Updated: 2020/09/17 17:34:29 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	l;
	size_t	i;

	l = ft_strlen(s);
	i = 0;
	new = (char *)malloc(sizeof(char) * l + 1);
	if (new == 0)
	{
		return (NULL);
	}
	while (i < l + 1)
	{
		new[i] = s[i];
		++i;
	}
	new[i] = 0;
	return ((char *)new);
}
