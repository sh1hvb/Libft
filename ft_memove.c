/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:18 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 16:55:44 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memove(void *dst, const void *src, size_t len)
{
char *s;
char *d;
size_t i;

s =(char*)src;
d = (char *)dst;
i = 0;
if(d > s)
    while (len-- > 0)
        d[len] = s[len];
else
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
