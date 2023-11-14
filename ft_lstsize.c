/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:12:00 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/13 21:50:23 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i = 0;
    while(lst)
    {
        i++;
        lst = lst->next;
    }
    return i;
}

// int main()
// {
//     t_list node0;
//     t_list node1;
//     node0.content = "habibi";
//     node0.next = &node1;
//     node1.content = "habiibi 1";
//     node1.next = NULL;
//     t_list *p = &node0;
//     int a =ft_lstsize(p);
//     printf("%d",a);
// }