/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:15:00 by aahlyel           #+#    #+#             */
/*   Updated: 2022/10/26 16:04:02 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (*str == 0x20 || (*str >= 0x09 && *str <= 0x0d))
		str++;
	if (*str == 0x2D || *str == 0x2B)
		if (*(str++) == 0x2D)
			sign = -1;
	while (*str && ft_isdigit(*str))
		res = (res * 10) + *(str++) - 0x30;
	return ((int)(res * sign));
}
