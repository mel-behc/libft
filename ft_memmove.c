/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:53:14 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:58:28 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	if (ds == NULL && sr == NULL)
		return (dst);
	if (ds > sr)
	{
		while (i < len)
		{
			ds[(len - 1) - i] = sr[(len - 1) - i];
			i++;
		}
	}
	else
		ft_memcpy(ds, sr, len);
	return (ds);
}
