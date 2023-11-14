/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:37:19 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/14 18:20:12 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *p = *lst;
    while(p)
    {
        p = p->next; 
    }
    p->next = new;
}
// int main()
// {
     
// t_list node0;
//     t_list node1;
//     t_list node2;
//     t_list node3;
//     node0.content = "habibi";
//     node0.next = &node1;
//     node1.content = "habiibi 1";
//     node1.next = &node2;
//     node2.content = "habibi 2";
//     node2.next = NULL;
//     t_list *p = &node0;
//     t_list *d = p;
//     int a =ft_lstsize(d);
//     printf("%d",a);
//     node3.content = "habiibi 3";
//     node3.next = NULL;
//     ft_lstadd_back(&d,&node3);
//      a = ft_lstsize(p);
//      printf("%d",a); 
// }