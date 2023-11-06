/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:18:49 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 14:47:24 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char *ft_strtrim(char const *s1, char const *set)
// {
//     int i = 0;
//     size_t lenn = ft_strlen((char *)s1);
//     int j;
//     char *p = (char *)malloc(sizeof(char) * lenn + 1);
//     if(!p)
//     return NULL;
//     int o = 0;
//     while(s1[i])
//     {
//          j =0;
//          while(set[j])
//          {
//             while(s1[i]==set[j])
//                 i++;
//             while(s1[lenn] == set[j])
//                 lenn--;
//             j++;
//          }
//          p[o]=s1[i];
//          o++;
//          i++;
//     }
//     p[i]='\0';
//     return p;
// }


char *ft_strtrim(char const *s1, char const *set)
{
    if (s1 == NULL || set == NULL)
        return NULL;

    size_t lenn = ft_strlen((char *)s1);
    int start = 0;
    int end = lenn - 1;

    // Find the starting position to trim
    while (s1[start] && ft_strchr(set, s1[start]) != NULL)
        start++;

    // Find the ending position to trim
    while (end > start && ft_strchr(set, s1[end]) != NULL)
        end--;

    size_t new_len = end - start + 1;

    char *result = (char *)malloc(new_len + 1); 
    if (result == NULL)
        return NULL;

    // Copy the trimmed characters to the result string
    ft_strlcpy(result, s1 + start, new_len + 1);

    return result;
}
