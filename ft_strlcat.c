/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:03:40 by aahlyel           #+#    #+#             */
/*   Updated: 2022/10/26 18:23:42 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	returnlen;
	size_t	i;

	i = -1;
	returnlen = ft_strlen(src);
	if (!dstsize)
		return (returnlen);
	dstlen = ft_strlen(dst);
	if (dstlen > dstsize)
		return (returnlen + dstsize);
	returnlen += dstlen;
	while (*src && dstlen < dstsize - 1)
		*(dst + dstlen++) = *(src++);
	*(dst + dstlen) = '\0';
	return (returnlen);
}
