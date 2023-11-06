/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:54 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:42:55 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t n)
{
    size_t i = 0;
    size_t src_len = ft_strlen(src);
    size_t dst_len = ft_strlen(dst);
    if(dst_len> n)
        return (src_len + n);
    while (i + dst_len + 1 > n && src[i])
    {
        dst[dst_len + i]=src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
    
}