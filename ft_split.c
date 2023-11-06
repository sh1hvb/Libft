/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:32:04 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/06 14:31:35 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t ft_strlen(const char *str){
	size_t  i = 0;
	while(str[i])
		i++;
	return i;
}
size_t ft_strlcpy(char *dest,const char *src, size_t n )
{
    size_t i = 0;
    while( src[i] && dest[i] &&  i < n)
    {
        dest[i] = (char *)src[i];
        i++;
    }
    dest[i]='\0';
    return ft_strlen(src) ;
}


void clear(char **arr)
{
    size_t i;
    i = 0;
    while(arr[i])
        free(arr[i++]);
    free(arr);
}

int count_word(const char *str,char c)
{
    int i = 0;
    int count =0;
    while(str[i])
    {
        if(str[i] == c && str[i])
        {
            i++;
            continue;
        }
        count++;
        while(str[i]!=c && str[i])
        {
            i++;
        }
    }
    return (count);
}
size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t i = 0;
    size_t src_len = ft_strlen(src);
    size_t dst_len = ft_strlen(dst);
    if(dst_len> n)
        return (src_len + n);
    while (i + dst_len + 1 > n && src[i])
    {
        dst[dst_len + i]=src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
    
}
void fill_arr(char **arr,const char *str, char c)
{
    size_t i;
    int index;
    int isep;

    i = 0;
    index = 0;
    while(str[i])
    {
        if(str[i]== c)
        {
            i++;
            continue;
        }
        isep = i;
        while (str[i] != c && str[i])
        {
            i++;
        }
        arr[index]= (char *)malloc(i - isep + 1);
        ft_strlcpy((char *)arr[index++],(char *)str + isep, i - isep +1);
    }
}

char **ft_split(char const *s, char c)
{
 char **arr;
 int wrdcnt;
 if(!s)
    return NULL;
wrdcnt = count_word(s,c);
arr = malloc((wrdcnt + 1) * sizeof(char *));
if(!arr)return NULL;

fill_arr(arr,s,c);
arr[wrdcnt]=0;
return arr;
}
int main() {
    char *a="chihab , habibi , come , to , dubai";
    char c =',';
    char **arr= ft_split(a,c);
    size_t i = 0;
    while( i <= 5)
    {
       printf("%s\n",arr[i++]);
    } 
    
    return 0;
}