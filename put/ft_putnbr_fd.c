/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:53 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:44:34 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Outputs the integer ’n’ to the given file descriptor.

Parameters:
nb: The integer to output.
fd: The file descriptor on which to write.

Return value:
None
*/

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long long		n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
