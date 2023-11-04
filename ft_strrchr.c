/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:43:19 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:43:21 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strrchr(const char *str, int c)
{
    int i = ft_strlen( str) ;
    if(str == 0)
        return (char *)&str[i];
    while(i >= 0)
    {
        if(str[i]==c)
            return (char *)&str[i];
        i--;
    }
    return  0;
}