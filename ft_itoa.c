/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:31:03 by mmonereo          #+#    #+#             */
/*   Updated: 2020/09/21 18:45:29 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_numlen(unsigned int n)
{
	unsigned int len;

	len = 0;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}

static unsigned int	ft_numselect(int n, unsigned int *num)
{
	unsigned int len;

	if (n < 0)
	{
		*num = (unsigned int)(n * -1);
		len = ft_numlen(*(num)) + 1;
	}
	else
	{
		len = ft_numlen(*(num));
	}
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	unsigned int	i;
	char			*res;

	num = n;
	len = ft_numselect(n, &num);
	if (!(res = (char *)malloc(sizeof(char) * len)))
	{
		return (NULL);
	}
	if (n < 0)
	{
		res[0] = '-';
	}
	res[len] = '\0';
	i = len - 1;
	while (num >= 10)
	{
		res[i] = (char)(num % 10 + 48);
		num = num / 10;
		i--;
	}
	res[i] = (char)(num + 48);
	return (res);
}