/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:09 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/12 18:45:43 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	if (n == 0)
		return (NULL);
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
		i++;
	if (i < n && str[i] == (unsigned char)c)
		return ((void *)(str + i));
	else
		return (NULL);
}
