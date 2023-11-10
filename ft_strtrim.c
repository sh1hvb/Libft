/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:18:49 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/07 18:03:17 by mchihab          ###   ########.fr       */
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
//     return (NULL);
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
//     return (p);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenn;
	int		start;
	int		end;
	size_t	new_len;
	char	*result;

	if (s1 == 0 || set == 0)
		return (0);
	lenn = ft_strlen((char *)s1);
	start = 0;
	end = lenn - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new_len = end - start + 1;
	result = (char *)malloc(new_len + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1 + start, new_len + 1);
	return (result);
}
// int main()
// {
//     // printf("%s",ft_strtrim("habibi come to dubai", "hatbai"));
//  printf("%s",ft_strtrim("habibi come to dubai", "hatbai"));
//  }
