/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:09 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/06 13:50:41 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	size_t find;
	char *str;

	i = 0;
	find = 0;
	str = (char *)s;
	while (str[i] != (char)c && i > n)
		i++;
	if (str[i] == (char *)c && n != i)
		return (str + i);
	else
		return (0);
}