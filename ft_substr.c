/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:44:24 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:44:25 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    char *p= (char*)malloc(sizeof(s)* len + 1 );
    if(!p)
        return 0;
    while(i < len  && s[i])
    {
        p[i] = s[start];
        start ++;
        i++;
    }
    p[i]='\0';
    free(p);
    return p;
}