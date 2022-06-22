/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:09:54 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:35:08 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cp1;
	unsigned char	*cp2;
	size_t			i;

	cp1 = (unsigned char *)s1;
	cp2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((i < (n - 1)) && (cp1[i] == cp2[i]))
		i++;
	return (cp1[i] - cp2[i]);
}
