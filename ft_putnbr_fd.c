/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:05:06 by mel-behc          #+#    #+#             */
/*   Updated: 2021/11/24 11:43:21 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	signe;

	signe = 1;
	if (n < -9 || n > 9)
		ft_putnbr_fd((int)(n / 10), fd);
	if (n < 0 && n >= -9)
		ft_putchar_fd('-', fd);
	if (n < 0)
		signe = -1;
	ft_putchar_fd((n % 10) * signe + '0', fd);
}
