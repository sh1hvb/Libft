/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:27 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:42:29 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i]==c)
            return (char *)str + i;
        i++;
    }
    if (c == '\0')
         return (char *)str + i;
    return  (NULL);
}