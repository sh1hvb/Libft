/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:26:55 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/12 20:16:31 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size * count > SIZE_MAX)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_memset(p, 0, size * count);
	return ((void *)p);
}
// int main()
// {
//     printf("%s",ft_calloc(10,8));
// }
