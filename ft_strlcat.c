/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:09:30 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:25:04 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lnd;
	size_t	lns;

	i = 0;
	j = 0;
	lnd = ft_strlen(dst);
	lns = ft_strlen(src);
	if (lnd > dstsize)
		return (dstsize + lns);
	while (dst[i])
		i++;
	while (i + 1 < dstsize && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (lnd + lns);
}
