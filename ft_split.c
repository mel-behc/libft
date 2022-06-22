/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:46:25 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 12:22:29 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_tab(char *str, char c)
{
	size_t	i;
	size_t	count;
	char	**ptr;

	i = 0;
	count = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == '\0'\
					|| (str[i + 1] && str[i + 1] == c)))
			count++;
		i++;
	}
	ptr = malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	return (ptr);
}

static size_t	length(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static void	cp_str(char *dst, char *sr, size_t ln)
{
	size_t	i;

	i = 0;
	while (sr[i] && i < ln)
	{
		dst[i] = sr[i];
		i++;
	}
	dst[i] = '\0';
}

static void	*tab_free(char **s, size_t ln)
{
	size_t	i;

	i = 0;
	while (i < ln)
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	ln;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	ptr = alloc_tab((char *)s, c);
	while (ptr && s[i])
	{
		if (s[i] != c)
		{
			ln = length((char *)&s[i], c);
			ptr[j] = malloc(sizeof(char) * ln + 1);
			if (!ptr[j])
				return (tab_free(ptr, j));
			cp_str(ptr[j], (char *)&s[i], ln);
			j++;
			i += ln;
		}
		else
			i++;
	}
	return (ptr);
}
