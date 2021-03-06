/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:59:01 by mmonereo          #+#    #+#             */
/*   Updated: 2020/09/17 17:35:41 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	value;

	value = 0;
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c >= 48 && c <= 57))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
