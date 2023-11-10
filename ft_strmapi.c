/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:46:23 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/10 21:17:45 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len ;
    size_t i;
    char *p;

    if(!s && !f)
        return 0;
    len = ft_strlen(s);
    p = (char *)malloc(len + 1 );
    if (!p)
        return 0;
    i = 0;
    while (i < len)
    {
        p[i] = f(i,s[i]);
        i++;
    }
    p[i]= '\0';
    return (char *)(p);
}
// char f (unsigned int a, char b)
//     {
//         char s;
//         a = 5;
//         s = b + 1;
//         return s;
//     }
// int main()
// {

//     const char p[]="habibi come to dubai";
//     printf("%s",ft_strmapi(p,*f));
// }