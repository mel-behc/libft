/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:21:28 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:39:18 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	tlen;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	tlen = (ft_strlen(s1) + ft_strlen(s2));
	ptr = malloc(sizeof(char) * (tlen + 1));
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	i = ft_strlcat(ptr, s1, tlen + 1);
	ft_strlcat(&ptr[i], s2, tlen - i + 1);
	return (ptr);
}
