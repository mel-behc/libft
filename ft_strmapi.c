/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:11:50 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 12:01:05 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	char			*str;
	unsigned int	i;
	size_t			ln;

	str = (char *)s;
	i = 0;
	if (!s || !f)
		return (NULL);
	ln = ft_strlen(str);
	ptr = malloc(sizeof(char) * (ln + 1));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = f(i, str[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
