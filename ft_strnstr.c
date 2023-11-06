/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:43:13 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:43:15 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t lenn=ft_strlen(needle);
    if(lenn > len)
    {
        return NULL;
    }
    while(haystack[i])
    {
        j = 0;
        while (haystack[i+j]== needle[j] && needle[j] & i < len)
        {
            j++;
        }
        if(!(needle[j]))
            return (haystack[i]);
        i++;
    }
    return 0;

}
    