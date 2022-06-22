/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:53:31 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 12:02:34 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	n;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	if (s2[0] == '\0')
		return (s1);
	n = ft_strlen(s2);
	while (s1[i] && (len >= n) && (i < len))
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s2[j] && (i + j < len))
				j++;
		}
		if (s2[j] == '\0')
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
