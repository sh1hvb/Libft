/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:23 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/06 17:23:30 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *str, int c, size_t n)
{
    int i = 0;
    char *dest = (char *)str;
    while(n != 0)
    {
        dest[i++] = c;
        n--;
    }
    return dest;
}