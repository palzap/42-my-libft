/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:51:03 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:45:52 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Allocates (with malloc(3)) and returns a substring from the string ’str’.
The substring begins at index ’start’ and is of maximum size ’len’.

Parameters:
str: The string from which to create the substring.
start: The start index of the substring in the string ’str’.
len: The maximum length of the substring.

Return value:
The substring (substr)'
NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!str)
		return (0);
	if (ft_strlen(str) <= start || !len)
		return (ft_strdup(""));
	if (ft_strlen(str) - start >= len)
		i = len + 1;
	else
		i = ft_strlen(str) - start + 1;
	substr = (char *)malloc(sizeof(char) * i);
	if (!substr)
		return (0);
	ft_strlcpy(substr, str + start, i);
	return (substr);
}
