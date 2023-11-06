/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:15 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:42:16 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memcpy(void *dest,void *src ,size_t n)
{
    int i = 0;
    char *ndest = (char *)dest;
    char *nsrc = (char *)src;
    while(i < n){
        ndest[i] = nsrc[i];
        i++;
    }
    return dest;
}