/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:26:24 by aahlyel           #+#    #+#             */
/*   Updated: 2022/10/27 01:39:36 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = -1;
	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str)
		while (*(s + ++i))
			*(str + i) = f(i, *(s + i));
	return (str);
}
