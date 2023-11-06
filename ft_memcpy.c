/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:15 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/05 21:08:28 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> 
void *ft_memcpy(void *dest,void *src ,size_t n)
{
    size_t i = 0;
    char *ndest = (char *)dest;
    char *nsrc = (char *)src;
    while(i < n){
        ndest[i] = nsrc[i];
        i++;
    }
    return dest;
}
int main(){
    char *dest = "ab" ;
    char *src = "abefe";
    memcpy(dest,src,2);
    ft_memcpy(dest,src,2);
    printf("%s\n",ft_memcpy(dest,src,2));
    printf("%s\n",memcpy(dest,src,2));
}