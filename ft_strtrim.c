/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:44:55 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:40:57 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	start(char *s1, char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && check(set, s1[i]))
		i++;
	return (i);
}

static size_t	end(char *s1, char *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0 && check(set, s1[len - 1]))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	sr;
	size_t	ed;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	sr = start((char *)s1, (char *)set);
	ed = end((char *)s1, (char *)set);
	i = 0;
	if (sr > ed)
		sr = ed;
	ptr = (char *)malloc(sizeof(char) * ((ed - sr) + 1));
	if (!ptr)
		return (NULL);
	while (sr < ed)
		ptr[i++] = s1[sr++];
	ptr[i] = '\0';
	return (ptr);
}
