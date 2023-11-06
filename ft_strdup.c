/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:32 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/06 22:50:46 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char * ft_strdup(const char *s1)
{
    char *p;
    int i;

    i = 0;
    p = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
    if(!p)
        return 0;
    while (s1[i])
    {
       p[i]=s1[i];
       i++;
    }
    p[i]='\0';
    return p;                              
}