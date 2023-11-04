/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:41:58 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:42:00 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int a = 1;
    int i = 0;
    int result = 1;
    while(str[i] <= 32)
    {
        i++;
    }
    if(str[i]== '+' || str[i] == '-')
    {
        if(str[i]=='-')
            a = -1;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result*10 + str[i] - 0;
        i++;
    }
    result *= a;
    return result;
}