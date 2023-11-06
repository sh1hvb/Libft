/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:12 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:42:14 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int memcmp ( const void * ptr1, const void * ptr2, size_t n )
{
    const unsigned char *s1 = (char *)ptr1;
    const unsigned char *s2 = (char *)ptr2;
    size_t i = 0;
   while (n--)
   {
    if(*s1 != *s2)
        return(*s1 - *s2);
    if(n)
        {
            s1++;
            s2++;
        }
   }
   return 0;
   
}