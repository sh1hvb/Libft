/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:45:19 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/06 23:46:45 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
int cnt(int n)
{
    int count = 1;
    int tmp = n;
    if(n < 1)
    {
        n *= -1;
        count++;
    }
    while( tmp >= 10)
    {
        tmp = tmp/10;
        count++;
    }
    return count;
}
void insert(char *p, int n, int len)
{
    int tmp = n;
    if(n < 0)
    {
        tmp *= -1;
        p[0]='-';
    }
    
    while (len)
    {
    (p[--len])=tmp % 10 + 48;
    tmp= tmp /10;
    
    }
}
char *ft_itoi(int n)
{
    char *p=NULL;
    int count = cnt(n);
    if(n == -2147483648)
    {
        return (ft_strdup("-2147483648"));
    }
    if(n == 0)
    {
        return ft_strdup("0");
    }
    p = (char*)malloc(count + 1);
    if(!p)
    return NULL;
    return p;
}
int main()
{
    int num = 12345;  // Change this to the integer you want to convert
    char *str = ft_itoi(num);
    
    if (str)
    {
        printf("Integer: %d\n", num);
        printf("String: %s\n", str);
        free(str);  // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}