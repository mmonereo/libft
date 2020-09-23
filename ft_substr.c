/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:47:29 by mmonereo          #+#    #+#             */
/*   Updated: 2020/09/17 18:47:52 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = (char *)malloc(len * sizeof(char));
	if (new == 0)
	{
		return (NULL);
	}
	while (i < start)
	{
		i++;
	}
	ft_memcpy(&new[0], &s[i], (len * sizeof(char)));
	new[len] = 0;
	return (new);
}
