/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:35:44 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:57:15 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	count_digit(int nbr)
{
	long	num;
	size_t	count;

	num = nbr;
	count = 0;
	if (num <= 0)
	{
		num *= -1;
		count = 1;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nbr;
	size_t	len;

	ptr = NULL;
	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	len = count_digit(n);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	len--;
	while (nbr > 0)
	{
		ptr[len] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	if (n < 0)
		ptr[0] = '-';
	if (n == 0)
		ptr[0] = '0';
	return (ptr);
}
