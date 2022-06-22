/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:13:49 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 12:04:27 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	length;

	i = 0;
	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start < length)
	{	
		if (len >= (length - start))
			ptr = malloc(sizeof(char) * ((length - start) + 1));
		else
			ptr = malloc(sizeof(char) * ((len + 1)));
	}
	else
		return (ft_strdup(""));
	if (!ptr)
		return (NULL);
	while (s[i] && i < len && start <= length)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
