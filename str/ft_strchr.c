/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:24:08 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:44:50 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (unsigned char)c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (((char *)str) + i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", strchr("teste", 1024));
	printf("%s\n", ft_strchr("teste", 1024));
	return (0);
}*/
