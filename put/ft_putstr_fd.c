/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:03 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:44:40 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Outputs the string ’str’ to the given file descriptor.

Parameters:
str: The string to output.
fd: The file descriptor on which to write.

Return value:
None
*/

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}
