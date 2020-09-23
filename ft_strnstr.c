/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:07:45 by mmonereo          #+#    #+#             */
/*   Updated: 2020/09/17 17:29:53 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		l;

	l = (int)len;
	i = 0;
	j = 0;
	if (*needle == 0)
	{
		return ((char *)haystack);
	}
	while (l != 0 && haystack[i])
	{
		j = 0;
		while (haystack[i++] == needle[j++])
		{
			l--;
			if (l >= 0 && needle[j] == 0)
			{
				return ((char *)&haystack[i - j]);
			}
		}
		l--;
	}
	return (NULL);
}
