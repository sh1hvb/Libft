/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:59 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/06 14:24:16 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dest, char *src, size_t n )
{
    size_t i = 0;
    while( src[i] && dest[i] &&  i < n - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
    return ft_strlen(src) + 1;
}